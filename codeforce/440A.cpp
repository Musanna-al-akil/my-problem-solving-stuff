// https://codeforces.com/problemset/problem/440/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0;i<n-1;i++){
    	int temp;
    	cin>>temp;
    	sum +=temp;
    }

    cout << (1LL*(n+1)*n/2) - sum;
    
    return 0;
}
