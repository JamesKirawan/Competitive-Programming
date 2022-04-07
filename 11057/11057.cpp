#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while(cin>>n) {
        int arr[n+5];
        for(int i = 0 ; i < n ; i++) {
            cin>>arr[i];
        }
        int sum;
        cin>>sum;
        sort(arr, arr+n);
        int a = 0;
        int b = 0;
        int mn = 1000005;
        for (int i = 0 ; i < n ; i++) {
            int resMoney = sum - arr[i];
            if (arr[i] > resMoney) {
                break;
            }
            int left = i + 1; 
            int right = n - 1; 
            bool flag = false;
            // cout<<"find: "<<resMoney<<" "<<"cur:"<<arr[i]<<endl;
            // cout<<"left: "<<left<<" "<<"right: "<<right<<endl;

            while (left <= right) {
                int mid = (left + right) / 2;
                // cout<<"mid: "<<mid<<endl;
                if (arr[mid] == resMoney) {
                    flag = true;
                    break;
                }
                else if (resMoney > arr[mid]) {
                    left = mid + 1;
                } else if (resMoney < arr[mid]) {
                    right = mid - 1;
                }
            }
            if (flag) {
                if (resMoney - arr[i] < mn) {
                    a = arr[i];
                    b = resMoney;
                    mn = b - a;
                } 
            }
        }
        cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;
    }
}