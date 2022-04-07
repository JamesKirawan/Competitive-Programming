#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    int number = 0;
    while (tc--) {
        int a,b;
        cin>>a>>b;
        int total = 0;
        if (a % 2 == 0) {
            a++;
        }
        for(int i = a ; i <= b ; i += 2) {
            total += i;
        }
        cout<<"Case "<<++number<<": "<<total<<endl;
    }
}