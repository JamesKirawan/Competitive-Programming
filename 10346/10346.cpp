#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n,k;
    while (cin>>n>>k) {
        long long int total = n;
        while (n >= k) {
            int addCiggarete = n/k;
            total += n/k;
            n %= k;
            n += addCiggarete;  
        }
        cout<<total<<endl;
    }
}

//58 15
//59 60 61 62
//58 % 15 = 12
// 13 + 3 = 16