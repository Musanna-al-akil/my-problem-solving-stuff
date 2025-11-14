// https://cses.fi/problemset/task/1713

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
    	int count = 0;
    	for(int i = 1;i*i<=n;i++){
    		if(n%i==0){
    			count++;
    			if(n/i!=i){
    				count++;
    			}
    		}
    	}

    	cout<<count<<'\n';
    }
    
    return 0;
}
