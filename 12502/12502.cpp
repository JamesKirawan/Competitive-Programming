#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        long long int x,y,z;
        cin>>x>>y>>z;
        long long int xMin = min(x, y);
        long long int xMax = max(x, y);
        long long int xy = x + y;
        float eachHours = 1.0 * z / xy;
        long long int total = 0;
        if (xMax == x) {
            total = eachHours * (x + xMax - xMin);
        } else {
            total = eachHours * (y + xMax - xMin);
            total = z - total;
        }
        if (round(total) > 0) {
            cout<<round(total)<<endl;
        } else {
            cout<<0<<endl;
        }
    }
}