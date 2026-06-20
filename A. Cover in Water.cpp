#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;

            if (a == '.')
            {
                count++;
                s[i] = a;
            }
            else
            {
                s[i] = a;
            }
        }

        // find three consecutive pair of . if exist return two else return count of .
        int i = 0;
        bool found =false;
        while (i < n - 2)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.')
            {
                cout << 2 << endl;
                found =true;
                break;
            }
            i++;
        }
          if (!found) {
            cout << count << endl;
        }
    }
}