#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());

        sort(b.rbegin(), b.rend());

        for (int i = 0; i < n; ++i) {
            c[i] = a[i] + b[i];
        }

        bool allEqual = all_of(c.begin() + 1, c.end(), [&](int x) { return x == c[0]; });

        if (allEqual) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < n; ++i) {
                cout << b[i] << " ";
            }
            cout << endl;
        } 
        else {
            cout << "-1" << endl;
        }
    }

    return 0;
}
