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
    float totalKm = 0;
    float curV = 0;
    int cur = 0;
    while(getline(cin, s)) {
        string kecepatan = "";
        string hour = "";
        hour += s[0];
        hour += s[1];
        string minute = "";
        minute += s[3];
        minute += s[4];
        string second = "";
        second += s[6];
        second += s[7];
        int jam = stoi(hour);
        int menit = stoi(minute);
        int detik = stoi(second);
        if (s.size() > 8) {
            int i = 9;
            int now = 3600 * jam + 60 * menit + detik;
            totalKm += 1.0 * (now - cur) * curV;
            while (s[i]) {
                kecepatan += s[i];
                i++;
            }
            curV = stoi(kecepatan); 
            curV = 1.0 * curV / 3600;
            cur = 3600 * jam + 60 * menit + detik;
        } else {
            int now = 3600 * jam + 60 * menit + detik;
            totalKm += 1.0 * (now - cur) * curV;
            cur = now;
            cout<<hour<<":"<<minute<<":"<<second<<" ";
            cout<<fixed<<setprecision(2)<<totalKm<<" km"<<endl;
        }
        
    }
}