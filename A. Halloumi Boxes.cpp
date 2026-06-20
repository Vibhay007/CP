#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> sarr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            sarr[i] = arr[i];
        }
        sort(sarr.begin(), sarr.end());
        if (k == 1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] != sarr[i])
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}