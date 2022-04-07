#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        int arr[n+5];
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
            sum+=arr[i];
        }
        // cout<<sum<<endl;
        float avg = 1.0 * (sum) / n;
        int notPass = 0;
        for(int i = 0 ; i < n ; i++) {
            if (arr[i] <= avg) {
                notPass++;
            }
        }
        float passingGrade = 1.0 * (n - notPass) / n;
        cout<<fixed<<setprecision(3)<<passingGrade*100<<"%"<<endl;
    }
}