#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b;
    while(cin>>a>>b) {
        cout<<a<<" "<<b;
        long long int c = max(a, b);
        long long int d = min(a, b);
        long long int cnt = 0;
        for (int i = d ; i <= c ; i++) {
            long long int loop = i;
            long long int cnt2 = 1;
            // cout<<loop<<endl;
            while (loop > 1) {
                if (loop % 2 == 1) {
                    loop = 3 * loop + 1;
                }
                else {
                    loop/= 2;
                }
                cnt2++;
            }
            if (cnt2 > cnt) {
                cnt = cnt2;
            }
        }
        cout<<" "<<cnt<<endl;
    }
}