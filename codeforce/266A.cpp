// https://codeforces.com/problemset/problem/266/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

    char prev = 'A';
    int count = 0;
    for(int i = 0;i<n;i++){
        char cur;
        cin>>cur;
        if(prev == cur){
            count++;
        }
        prev = cur;
    }

    cout << count++;

    return 0;
}
