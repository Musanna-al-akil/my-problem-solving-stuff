// https://codeforces.com/problemset/problem/1554/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int n;cin>>n;
    	int prev = 0;
    	long long mul = 0;
    	for(int i = 0;i<n;i++){
    		int cur;cin>> cur;

    		mul = max((1LL*prev*cur), mul);
    		prev = cur;
    	}

    	cout << 1e8<<'\n';
    }

    
    return 0;
}
