#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        if (n == 0) break;
        else {
            long long int total = 0;
            // for(int i = 1 ; i <= n ; i++) {
            //     total += (i * i);
            // }
            total = (n + 1) * (2 * n + 1) * n / 6;
            cout<<total<<endl;
        }
    }
}