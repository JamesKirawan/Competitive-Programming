#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n) {
        if (n == 0) break;
        int sum = 0;
        for(int i = 1 ; i <= n/2 ; i++) {
            if (n % i == 0) sum += i;
        }
        int space = 10000;
        while (space > n) {
            cout<<" ";
            space/=10;
        }
        if (n == sum) {
            cout<<n<<"  PERFECT"<<endl;
        } else if (n < sum) {
            cout<<n<<"  ABUNDANT"<<endl;
        } else {
            cout<<n<<"  DEFICIENT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
}