#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> digit;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {     
          
            digit.push_back(s[i]);
        }
    }
    string ans;

    sort(digit.begin(),digit.end());
    for(int i=0;i<digit.size();i++)
    {
        ans.push_back(digit[i]);
        ans.push_back('+');


    }
    ans.pop_back();
    cout<<ans;
}