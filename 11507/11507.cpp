#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    map <string, map<string,string> > mp;
    mp["+x"]["+y"] = "+y";
    mp["+x"]["-y"] = "-y";
    mp["+x"]["+z"] = "+z";
    mp["+x"]["-z"] = "-z";
    mp["-x"]["+y"] = "-y";
    mp["-x"]["-y"] = "+y";
    mp["-x"]["+z"] = "-z";
    mp["-x"]["-z"] = "+z";
    mp["+y"]["+y"] = "-x";
    mp["+y"]["-y"] = "+x";
    mp["+y"]["+z"] = "+y";
    mp["+y"]["-z"] = "+y";
    mp["-y"]["+y"] = "+x";
    mp["-y"]["-y"] = "-x";
    mp["-y"]["+z"] = "-y";
    mp["-y"]["-z"] = "-y";
    mp["+z"]["+y"] = "+z";
    mp["+z"]["-y"] = "+z";
    mp["+z"]["+z"] = "-x";
    mp["+z"]["-z"] = "+x";
    mp["-z"]["+y"] = "-z";
    mp["-z"]["-y"] = "-z";
    mp["-z"]["+z"] = "+x";
    mp["-z"]["-z"] = "-x";

    while(cin>>n) {
        if (n == 0) {
            break;
        } else {
            string cur = "+x";
            for (int i = 0 ; i < n - 1 ; i++) {
                string now;
                cin>>now;
                if (now == "No") {
                    continue;
                } else {
                    cur = mp[cur][now];
                }
            }
            cout<<cur<<endl;
        }
    }

}