#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    int number = 0;
    while (tc--) {
        int n,k,p;
        cin>>n>>k>>p;
        if ((k + p) % n) {
            cout<<"Case "<<++number<<": "<<(k + p) % n<<endl;
        } else {
            cout<<"Case "<<++number<<": "<<n<<endl;
        }
    }
}