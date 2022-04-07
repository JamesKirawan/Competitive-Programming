#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    while (cin>>a>>b) {
        int arrA[10];
        int arrB[10];
        memset(arrA, 0, sizeof(arrA));
        memset(arrB, 0, sizeof(arrB));
        int carry = 0;
        if (a == 0 && b == 0) {
            break;
        } else {
            int i = 0;
            while (a > 0 || b > 0) {
                arrA[i] = a % 10;
                a /= 10;
                arrB[i] = b % 10;
                b /= 10;
                i++;
            }
            for(int i = 1 ; i < 10 ; i++) {
                if (arrA[i-1] + arrB[i-1] >= 10) {
                    carry++;
                    arrA[i]++;
                    // cout<<arrA[i-1] + arrB[i-1]<<endl;
                }
            }
            if (carry > 1) {
                cout<<carry<<" carry operations."<<endl;    
            }
            else if (carry == 1) {
                cout<<carry<<" carry operation."<<endl; 
            }
            else {
                cout<<"No carry operation."<<endl;
            }
        }
    }
}