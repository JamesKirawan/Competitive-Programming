#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    int a = 0;
    while (tc--) {
        int d,v,u;
        cin>>d>>v>>u;
        if (v >= u || u == 0 || v == 0) {
            cout<<"Case "<<++a<<": ";
            cout<<"can't determine"<<endl;
        }
        else {
            float t1 = 1.0 * d / u ;
            int Rv = (u * u) - (v * v);
            // cout<<Rv<<endl;
            float t2 = 1.0 * d / sqrt(Rv);
            cout<<"Case "<<++a<<": ";
            cout<<fixed<<setprecision(3)<<abs(t1-t2)<<endl;
        }
    }
}