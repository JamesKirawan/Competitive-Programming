#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        cin.ignore();
        string original[n + 5];
        string swant[n + 5];
        for(int i = 0 ; i < n ; i++) {
            getline(cin, original[i]);
        }
        for(int i = 0 ; i < n ; i++) {
            getline(cin, swant[i]);
        }
        int j = n - 1;
        for(int i = n - 1 ; i >= 0 ; i--) {
            if (original[i] == swant[j]) {
                j--;
            }
        }
        cout<<endl;
        while (j >= 0) {
            cout<<swant[j]<<endl;
            j--;
        }

    }
}

// Yertle
// Duke of Earl
// Sir Lancelot
// Elizabeth Windsor
// Michael Eisner
// Richard M. Nixon
// Mr. Rogers
// Ford Perfect
// Mack

// Yertle
// Richard M. Nixon
// Sir Lancelot
// Duke of Earl
// Elizabeth Windsor
// Michael Eisner
// Mr. Rogers
// Ford Perfect
// Mack

// Yertle 1
// Duke of Earl 2 
// Sir Lancelot 3
// Elizabeth Windsor 4 
// Michael Eisner 5
// Richard M. Nixon 6
// Mr. Rogers 7
// Ford Perfect 8 
// Mack 9

// Yertle 1
// Richard M. Nixon 2
// Sir Lancelot 3
// Duke of Earl 4 
// Elizabeth Windsor 5
// Michael Eisner 6 
// Mr. Rogers 7 
// Ford Perfect 8 
// Mack 9

//Yertle
//Sir Lancelot // a
//Duke Of Earl
//Elizabeth Windsor
//Michael Eisner
//Richard M. Nixon
//Mr. Rogers
//Ford Perfect
//Mack

//Yertle
//Richard M. Nixon //b
//Sir Lancelot
//Duke of Earl
//Elizabet Windosr
//Michael Eisner
//Mr. Rogers
//Ford Perfect
//Mack