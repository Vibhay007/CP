#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        //first take ai
        int hr=z;
        int c=n-x*z;
        while(c>0){
           c=c-(10*y+x);
            hr++;
        }
        //not include ai
        int b=n;
        int hr1=0;
        while(b>0)
        {
            b=b-(x+y);
            hr1++;
        }
        cout<<min(hr,hr1)<<endl;
    }
}