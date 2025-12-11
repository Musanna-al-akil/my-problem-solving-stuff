// https://codeforces.com/problemset/problem/579/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int count = 0;

    for(int i = 0;i<32;i++){
    	if(1&(t>>i)){
    		count++;
    	}
    }

    cout << count<<endl;
    
    return 0;
}
