#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    int number = 0;
    while(cin>>a>>b) {
        if (a == 0 && b == 0) {
            break;
        } else {
            int d = 0;
            if (a > b * 26 + b) {
                cout<<"Case "<<++number<<": impossible"<<endl;
            } else {
                int n = b;
                while (a > b) {
                    d++;
                    b = n + (n * d);
                }
                cout<<"Case "<<++number<<": "<<d<<endl;
            }
            
        }
    }
}

//79 > 3 * 26
