#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while (cin>>s) {
        for (int i = 0 ; i < s.size() ; i++) {
            char a = (char) ((int) (s[i]) - 7);
            cout<<a;
        }
        cout<<endl;
    }
}