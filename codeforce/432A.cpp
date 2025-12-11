// https://codeforces.com/problemset/problem/432/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n>>k;
    int left = 5-k;
    vector<int> vec(n);

    for(int i = 0;i<n;i++){
    	cin>> vec[i];
    }
    int count = 0;
    for(int i = 0;i<n;i++){
    	if(vec[i]<=left){
    		count++;
    	}
    }

    cout << count/3<<endl;
    
    return 0;
}
