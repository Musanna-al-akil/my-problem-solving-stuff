// https://codeforces.com/problemset/problem/1370/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while(t--){
    // 	int n;cin>>n;

    // 	if(n%2==0){
    // 		cout << n/2<<endl;
    // 	}else{
    // 		cout << (n-1)/2<<endl;
    // 	}
    // }

    int a,b;cin>>a>>b;

    int lcm = log(a)/log(b);

    cout <<lcm<<endl;
    
    return 0;
}
