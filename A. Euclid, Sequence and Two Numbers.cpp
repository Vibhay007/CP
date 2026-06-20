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
        for (int i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        bool flag=true;
        for(int i=0;i<n-2;i++){
            if(arr[i+2]!=arr[i]%arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
                    cout << arr[0] << " " << arr[1] << "\n";
        }
        else{
             cout << -1 << "\n";
        }

    }
}