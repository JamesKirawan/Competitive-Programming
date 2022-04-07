#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while(getline(cin, s)) {
        int arr[1005];
        int total = 0;
        string a = "";
        for(int i = 0; i < s.size() ; i++) {
            if (s[i] == ' ') {
                arr[total] = stoi(a);
                a = "";
                total++;
            } else {
                a += s[i];
            }
        }
        arr[total] = stoi(a);
        total++;
        // for(int i = 0 ; i < total ; i++) {
        //     cout<<arr[i]<<endl;
        // }
        int done = 0;
        vector <int> vec;
        bool temp = true;
        cout<<s<<endl;
        for (int i = 1 ; i < total ; i++) {
            if (arr[i] < arr[i-1]) { //1 2 3 4 5
                temp = false;
                break;
            }
        }

        while (done < total && !temp) {
            int mx = -1;
            int idx = -1;
            for(int i = 0 ; i < total - done; i++) {
                if (mx < arr[i]) {
                    mx = arr[i];
                    idx = i;
                }
            }

            if (idx == total - 1 - done) {
                done++;
                continue;
            }

            if (idx == 0) {
                vec.push_back(done + 1);
                reverse(arr, arr + total - done);
                // for(int i = 0 ; i < total ; i++) {
                //     cout<<arr[i]<<" ";
                // }
                // cout<<endl;
                done++;
            }
            else {
                vec.push_back(total - idx); 
                reverse(arr, arr + idx + 1);
                // for(int i = 0 ; i < total ; i++) {
                //     cout<<arr[i]<<" ";
                // }
                // cout<<endl;
                vec.push_back(done + 1);
                reverse(arr, arr + total - done);
                // for(int i = 0 ; i < total ; i++) {
                //     cout<<arr[i]<<" ";
                // }
                // cout<<endl;
                done++;
            }
            bool good = true;
            for (int i = 1 ; i < total ; i++) {
                if (arr[i] < arr[i-1]) { //1 2 3 4 5
                    good = false;
                    break;
                }
            }
            if (good) break;
        }
        for(int i = 0 ; i < vec.size() ; i++) {
            cout<<vec[i]<<" ";
        }
        cout<<"0"<<endl;
    }
}

//5 1 2 3 4
//sort(arr, arr + n);

   //done = 0
        //1 2 5 3 4
        //1 2 5 3 4 //idx = 2, done = 0
        //5 2 1 3 4 //reverse(total = 5 - done = 0) //4 3 1 2 5 //done = 1
        //4 3 1 2 5 //idx = 0, done = 1 reverse(5 - 1) //done = 2
        //2 1 3 4 5 //idx = 2, done = 2 reverse(2 + 1) 
        //3 1 2 4 5 //done = 3, reverse(5 - 2) //2 1 3
        // 

//4 3 2 1 5 //idx = 0 == 5 - 1 - 1 //3

//5 1 2 3 4


//1 2 5 3 4 //3
//5 2 1 3 4 //1
//4 3 1 2 5 //2
//2 1 3 4 5 //3
//3 1 2 4 5 //3 
//2 1 3 4 5 //4
//1 2 3 4 5 //0


//7 1 6 5 3 4 8 2

//2 1 7 2 5 3 6 5 6 0

//7 1 6 5 3 4 8 2 //7
//8 4 3 5 6 1 7 2 //1
//2 7 1 6 5 3 4 8 //2
//7 2 1 6 5 3 4 8 //
