// https://codeforces.com/problemset/problem/1294/C

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
    	int a,b,c = 0;
    	for(long long i = 2;i*i*i<=n;i++){
    		for(long long j = i+1;j*j<=n/i;j++){

    			if((i * j * (n/(i*j))) == n  && (n/(i*j)) !=i && (n/(i*j)) !=j){
    				c=(n/(i*j));
    				a = i;
    				b = j;
    				i = n;
    				break;
    			}
    		}
    	}

    	if(c>0){
    		cout << "YES"<<"\n";

    		cout << a <<' '<<b<<' ' <<c<<"\n";
    	}else{
    		cout << "NO"<<"\n";
    	}

    }
    
    return 0;
}
