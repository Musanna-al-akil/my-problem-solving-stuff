// https://codeforces.com/problemset/problem/1747/A


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

    	cin >>n;

    	long long sum = 0;

    	for(int i =0;i<n;i++){
    		long long temp;
    		cin>>temp;

    		sum += temp;
    	}

    	cout << abs(sum)<<'\n';
    }
    
    return 0;
}
