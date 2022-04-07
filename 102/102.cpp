#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int arr[9];
    while(cin>>arr[0]) {
        long long int min = 1e18;
        for (int i = 1 ; i < 9 ; i++) {
            cin>>arr[i];
        }
        string s;
        //0 1 2 3 4 5 6 7 8
        //B G C B G C B G C
        long long int BCG = arr[3] + arr[6] + arr[2] + arr[8] + arr[1] + arr[4];
        long long int BGC = arr[3] + arr[6] + arr[1] + arr[7] + arr[2] + arr[5];
        long long int CBG = arr[5] + arr[8] + arr[0] + arr[6] + arr[4] + arr[1];
        long long int CGB = arr[5] + arr[8] + arr[1] + arr[7] + arr[0] + arr[3];
        long long int GBC = arr[4] + arr[7] + arr[0] + arr[6] + arr[2] + arr[5];
        long long int GCB = arr[4] + arr[7] + arr[2] + arr[8] + arr[0] + arr[3];
        
        if (BCG < min) {
            min = BCG;
            s = "BCG";
        } 
        if (BGC < min) {
            min = BGC;
            s = "BGC";
        }
        if (CBG < min) {
            min = CBG;
            s = "CBG";
        }
        if (CGB < min) {
            min = CGB;
            s = "CGB";
        }
        if (GBC < min) {
            min = GBC;
            s = "GBC";
        }
        if (GCB < min) {
            min = GCB;
            s = "GCB";
        }
        // cout<<BCG<<" "<<BGC<<" "<<GCB<<" "<<GBC<<" "<<CBG<<" "<<CGB<<endl;
        cout<<s<<" "<<min<<endl;
    }
}