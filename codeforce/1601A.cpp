// https://codeforces.com/problemset/problem/1601/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int n;cin>> n;
    	vector<int> cnt(30,0);
    	int a[n+1];

    	for(int i = 1;i<=n;i++){
    		cin>>a[i];

    		for(int j = 0;j<30;j++){
    			if(a[i]>>j & 1){
    				cnt[j]++;
    			}
    		}
    	}


    	for(int k = 1;k<=n;k++){
    		bool ok = true;

    		for(int i = 0;i<30;i++){
    			if(cnt[i]%k != 0){
    				ok = false;
    			}
    		}

    		if(ok) cout << k <<' ';
    	}
    	cout <<'\n';
    }
    
    return 0;
}
