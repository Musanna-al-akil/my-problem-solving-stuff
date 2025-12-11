// https://codeforces.com/problemset/problem/1475/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int x,y,n;cin>>x>>y>>n;
    	int div = (n-y)/x;
    	cout << div*x+y<<endl;
    }
    
    return 0;
}
