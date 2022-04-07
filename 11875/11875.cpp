#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    int number = 0;
    while (tc--) {
        int n;
        cin>>n;
        int arr[n+5];
        int median = n/2;
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        cout<<"Case "<<++number<<": "<<arr[median]<<endl;
    }
}