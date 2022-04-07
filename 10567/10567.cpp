#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int tc;
    cin>>tc;
    while(tc--) {
        string x;
        cin>>x;
        int cur = 0;
        int low = -1;
        int high = 0;
        for (int i = 0 ; i < s.length() ; i++) {
            if (x[cur] == s[i] && low == -1) {
                cur++;
                low = i;
            }
            else if (x[cur] == s[i]) {
                cur++;
            }
            if (cur == x.length()) {
                high = i;
                break;
            }
        }

        if (high == 0) {
            cout<<"Not matched"<<endl;
        } else {
            cout<<"Matched "<<low<<" "<<high<<endl;
        }
    }
}