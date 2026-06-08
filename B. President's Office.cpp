#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
bool valid(int i, int j, int n, int m)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
int main()
{
    int n, m;
    char c;
    cin >> n >> m >> c;

    vector<string> grid(n);
   
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }
   set<char> adjColors;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == c)
            {
                for (int k = 0; k < 4; k++)
                {
                    int new_i = i + row[k];
                    int new_j = j + col[k];
                    if (valid(new_i, new_j, n, m))
                    {
                        char ch = grid[new_i][new_j];
                        if (ch != '.' && ch != c)
                        {
                            adjColors.insert(ch);
                        }
                    }
                }
            }
        }
    }
    cout << adjColors.size() << endl;

    return 0;
}