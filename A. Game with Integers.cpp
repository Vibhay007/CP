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
        int a = 10;
        bool flag=false;
        while (a--)
        {
            //+1
            if((n+1) %3==0){
                //win
                cout<<"First"<<endl;
                flag=true;
                break;

            }
            else if((n-1)%3==0){
                //win
                 cout<<"First"<<endl;
                flag=true;
                break;
            }
            
        }
        if(!flag){
            cout<<"Second"<<endl;
        }

    }
}