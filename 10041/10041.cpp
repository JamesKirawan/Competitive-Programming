#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        long long int n;
        cin>>n;
        long long int arr[n+5];
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int mid = arr[n/2];
        int min = 0;
        for(int i = 0 ; i < n ; i++) {
            min += abs(arr[i] - mid);
        }
        cout<<min<<endl;
    }
}