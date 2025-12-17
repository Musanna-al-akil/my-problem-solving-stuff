// https://atcoder.jp/contests/abc162/tasks/abc162_c


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int gcd = 0;

    for(int i = 1;i<=t;i++){
    	for(int j = 1;j<=t;j++){
    	
    		for(int k = 1;k<=t;k++){
    			gcd += __gcd(i,__gcd(j,k));
    		}
    	}
    }

    cout <<gcd<<endl;
    
    return 0;
}
