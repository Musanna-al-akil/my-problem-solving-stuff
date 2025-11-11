// https://codeforces.com/problemset/problem/1352/C

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int n,k;

bool f(int x){
	return (x-x/n) >=k;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
    	cin>>n>>k;

    	int l = 1, r = 2e9, ans = 1;

    	while(l <=r){
    		int mid = l + (r-l)/2;

    		if(f(mid)){
    			ans = mid;
    			r = mid-1;
    		}else{
    			l = mid +1;
    		}
    	}

    	cout << ans<<endl;
    }
    return 0;
}
