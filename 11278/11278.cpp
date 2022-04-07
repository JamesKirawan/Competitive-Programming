#include <bits/stdc++.h>
using namespace std;
int main() {
    map <char, char> mp;
    string standard1 = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string weird1 = "`123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'";
    for(int i = 0 ; i < standard1.size() ; i++) {
        mp[standard1[i]] = weird1[i];
    }
    string standard2 = "~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string weird2 = "~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    for(int i = 0 ; i < standard2.size() ; i++) {
        mp[standard2[i]] = weird2[i];
    }
    mp[' '] = ' ';
    mp['\\'] = '\\';
    string s;
    while(getline(cin, s)) {
        for(int i = 0 ; i < s.size() ; i++) {
            cout<<mp[s[i]];
        }
        cout<<endl;
    }

}