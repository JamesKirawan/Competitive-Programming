#include <bits/stdc++.h>
using namespace std;
int main() {
    int y, p;
    while(cin>>y>>p) {
        int arr[p+5];
        for(int i = 0 ; i < p ; i++) {
            cin>>arr[i];
        }
        int first = 0;
        int last = 0;
        int max = -1;
        for(int i = 0 ; i < p ; i++) {
            int c = 1;
            for(int j = i + 1 ; j < p ; j++) {
                int gap = arr[j] - arr[i]; 
                if (gap >= y) {
                    if (c > max) {
                        max = c;
                        first = arr[i];
                        last = arr[j-1];
                    }
                    break;
                } else {
                    c++;
                }
            }
        }
        cout<<max<<" "<<first<<" "<<last<<endl;
    }
}