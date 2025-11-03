// https://codeforces.com/problemset/problem/1743/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int n;
    	cin>> n;

    	for(int i = 1; i<=n;i++){
    		if(i!=2){
    			cout << i<<' ';
    		}
    	}
    	cout << 2 <<'\n';
    }
    
    return 0;
}
