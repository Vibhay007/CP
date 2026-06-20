#include <iostream>

#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;
 
        int ans = 1e18;
        int i = 0;
        while (a != b) {
            if (b > a) {
                swap(a, b);
            }
 
            ans = min(ans, abs(a - b) + i);
            a /= x;
            i++;
        }
        ans = min(ans, i);
        cout << ans << endl;
    }
}