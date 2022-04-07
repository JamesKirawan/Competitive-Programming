#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    unordered_map <unsigned int, unsigned int> mp;
    while (cin>>a>>b) {
        long long int mx = max(a, b);
        long long int mn = min(a, b);
        long long int maxS = -1;
        long long int minV = 1000000;
        if (a == 0 && b == 0) {
            break;
        }
        for(int i = mn ; i <= mx ; i++) {
            long long int count = 0;
            if (i == 1) {
                count = 3;
            }
            long long int n = i;
            while (n != 1) {
                if (mp[n]) {
                    count += mp[n];
                    // cout<<i<<" "<<n<<endl;
                    break;
                }
                if (n % 2) {
                    n = n * 3 + 1;
                } else {
                    n = n / 2;
                }
                count++;
            }
            if (!mp[i]) {
                mp[i] = count;
            }
            if (count > maxS) {
                maxS = count;
                minV = i;
            }
        }
        cout<<"Between "<<mn<<" and "<<mx<<", "<<minV<<" generates the longest sequence of "<<maxS<<" values."<<endl;
        //Between 1 and 20, 18 generates the longest sequence of 20 values.
    }
}