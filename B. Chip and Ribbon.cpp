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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int count=0;
        if(nums[0]!=1) count=nums[0]-1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i]){
                count=count+abs(nums[i+1]-nums[i]);
            }
        }
        cout<<count<<"\n";
    }
}