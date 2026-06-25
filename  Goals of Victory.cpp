#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=ans+arr[i];
        }
        cout<<-ans<<endl;
    }
}