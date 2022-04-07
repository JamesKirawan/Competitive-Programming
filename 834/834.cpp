#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    while(cin>>a>>b) {
        vector <int> vec;
        int temp1 = a;
        int temp2 = b;
        bool rational = true;
        vec.push_back(temp1/temp2);
        if (temp1 % temp2 == 1) {
            vec.push_back(temp2);
            rational = false;
        }
        temp1 = temp1 % temp2;
        temp2 = temp2;
        while(true && rational) {
            int mx = max(temp1, temp2);
            int mn = min(temp1, temp2);
            vec.push_back(mx / mn);
            temp1 = mx % mn;
            temp2 = mn;
            if (temp1 == 1) {
                vec.push_back(temp2);
                break;
            }
        }
        cout<<"["<<vec[0]<<";";
        for(int i = 1 ; i < vec.size() ; i++) {
            if (i == vec.size() - 1) {
                cout<<vec[i]<<"]\n";
            }
            else {
                cout<<vec[i]<<",";
            }
        }
    }
}