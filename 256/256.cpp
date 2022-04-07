#include <bits/stdc++.h>
using namespace std;
vector <vector <string> > vec(9);
void precalculate() {
    vec[2].push_back("00");
    vec[2].push_back("01");
    vec[2].push_back("81");

    int s2[4];
    for (int i = 0 ; i <= 99 ; i++) {
        for (int j = 0 ; j <= 99 ; j++) {
            if ((i + j) * (i + j) == i * 100 + j) {
                s2[0] = i / 10;
                s2[1] = i % 10;
                s2[2] = j / 10;
                s2[3] = j % 10;
                string s3 = to_string(s2[0]) + to_string(s2[1]) + to_string(s2[2]) + to_string(s2[3]);
                // cout<<s3<<endl;
                vec[4].push_back(s3);
            }
        }
    }

    int s3[6];
    for (int i = 0 ; i <= 999 ; i++) {
        for (int j = 0 ; j <= 999 ; j++) {
            if ((i + j) * (i + j) == i * 1000 + j) {
                s3[0] = i / 100; 
                s3[1] = i / 10 % 10; 
                s3[2] = i % 10;
                s3[3] = j / 100;
                s3[4] = j / 10 % 10;
                s3[5] = j % 10;
                string s4 = to_string(s3[0]) + to_string(s3[1]) + to_string(s3[2]) + to_string(s3[3]) + to_string(s3[4]) + to_string(s3[5]);
                vec[6].push_back(s4);
            }
        }
    }

    int s4[8];
    for (int i = 0 ; i <= 9999 ; i++) {
        for (int j = 0 ; j <= 9999 ; j++) {
            if ((i + j) * (i + j) == i * 10000 + j) {
                s4[0] = i / 1000; 
                s4[1] = i / 100 % 10; 
                s4[2] = i / 10 % 10;
                s4[3] = i % 10;
                s4[4] = j / 1000;
                s4[5] = j / 100 % 10;
                
                s4[6] = j / 10 % 10;
                s4[7] = j % 10;
                string s5 = to_string(s4[0]) + to_string(s4[1]) + to_string(s4[2]) + to_string(s4[3]) + to_string(s4[4]) + to_string(s4[5]) + to_string(s4[6]) + to_string(s4[7]);
                vec[8].push_back(s5);
            }
        }
    }
}

int main() {
    precalculate();
    int n;
    while(cin>>n) {
        for(auto i : vec[n]) {
            cout<<i<<endl;
        }
    }
}