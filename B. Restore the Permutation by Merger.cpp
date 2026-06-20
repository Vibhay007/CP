#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(2 * n);

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }

        vector<int> visited(n + 1, 0);
        vector<int> ans;

        for (int i = 0; i < 2 * n; i++)
        {
            if (!visited[arr[i]])
            {
                ans.push_back(arr[i]);
                visited[arr[i]] = 1;
            }
        }

        for (int x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
}