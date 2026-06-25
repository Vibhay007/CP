#include <iostream>

#include <vector>
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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int i = 0;
        bool flag = true;
        while (i < n - 1)
        {
            if (arr[i] != arr[i + 1])
            {
                flag = false;
                break;
            }
            else
            {
                i += 2;
            }
        }
      

  if (n == 2)
        {
            cout << "Yes" << endl;
        }
        else  if (i == n - 1 )
        {
            cout << "No"<<endl;
        }
        else if (n == 2)
        {
            cout << "Yes" << endl;
        }
        else if (flag == false)
        {
            cout << "No" << endl;
        }

        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}