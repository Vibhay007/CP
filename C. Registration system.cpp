#include <iostream>
#include <string>
using namespace std;
#include <unordered_map>

int main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;

    while(n--)
    {
        string s;
        cin>>s;

        if(mp.find(s)==mp.end()){
            // exist nhi krta h
          cout << "OK\n";
            mp[s]=1;
        }
        else{
            //exist krta h
         cout << s << mp[s] << '\n';
            mp[s]++;
        }
    }
    return 0;

}