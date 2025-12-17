//https://atcoder.jp/contests/abc182/tasks/abc182_b

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<int> vec(t);

    for(int i = 0;i<t;i++){
    	cin>>vec[i];
    }

    int out = 0;
    int val = 0;

    for(int i = 2;i<1005;i++){
    	int gcd = 0;
    	for(int j = 0;j<t;j++){
    		if(vec[j]%i==0){
    			gcd++;
    		}
    	}

    	if(gcd>out){
    		out = gcd;
    		val = i;
    	}
    }

    cout << val<<endl;
    
    return 0;
}
