#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    long long pal[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};

    while (t--) {
        long long n;
        cin >> n;

        if (n < 22) {
            bool found = false;

            for (long long a = 0; a <= n; a++) {
                string s = to_string(a);
                string r = s;
                reverse(r.begin(), r.end());

                if (s == r && (n - a) % 12 == 0) {
                    cout << a << " " << (n - a) << "\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << -1 << "\n";
        } else {
            long long a = pal[n % 12];
            long long b = n - a;

            cout << a << " " << b << "\n";
        }
    }

    return 0;
}