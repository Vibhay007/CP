#include <iostream>
#include <vector>
using namespace std;
#include <unordered_map>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n - 2);

        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
        }

        // 101 pattern should not present
        bool found = false;
        int i = 0;
        while (i < n - 4)
        {
            if (arr[i] == 0)
            {
                i++;
            }
            else if (arr[i] == 1 && arr[i + 1] == 0 && arr[i + 2] == 1)
            {
                found = true;
                break;
            }
            else
            {
                i++;
            }
        }
        if (found)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}