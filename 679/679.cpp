#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    while(cin>>tc) {
        if (tc == -1) {
            break;
        } else {
            while(tc--) {
                int d, n;
                cin>>d>>n;
                int total = 1;
                for (int i = 0 ; i < d - 1; i++) {
                    if (n % 2 == 1) {
                        total = 2 * total;
                        n = n/2 + 1;
                    } else {
                        total = 2 * total + 1;
                        n = n/2;
                    }
                    // cout<<total<<endl;
                }
                cout<<total<<endl;
            }
        }
    }
}