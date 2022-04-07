#include <bits/stdc++.h>
using namespace std;
string integer_to_string(int k) {
    stringstream ss;  
    ss<<k;  
    string s;  
    ss>>s;
    return s;  
}

int main() {
    string s;
    while(getline(cin, s)) {
        string ans = "";
        for(int i = s.size() - 1 ; i >= 0 ; i--) {
            int a = (int) s[i];
            if (a >= 65 && a <= 90 || a >= 97 && a <= 122) {
                string b = integer_to_string(a);
                reverse(b.begin(), b.end());
                ans += b;
            }
            else if (s[i] == ' ' || s[i] == '!' || s[i] == ',' || s[i] == '.' || s[i] == ':' || s[i] == ';' || s[i] == '?') {
                string b = integer_to_string(a);
                reverse(b.begin(), b.end());
                ans += b;
            } 
            else {
                string c = "";
                c+=s[i];
                c+=s[i-1];
                a = stoi(c);
                if ((a >= 65 && a <= 90) || a == 32 || a == 33 || a == 44 || a == 46 || a == 58 || a == 59 || a == 63 || (a>= 97 && a <= 99)) {
                    // cout<<a<<endl;
                    ans += (char) a;  
                    i--;          
                }
                else {
                    c+=s[i-2];
                    a = stoi(c);
                    ans += (char) a;
                    i-=2;
                }
                
            }
        }
        cout<<ans<<endl;
    }
}