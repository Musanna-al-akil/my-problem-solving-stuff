// https://www.spoj.com/problems/CSUMQ/en/

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n+1);
    vector<int> presum(n+1);


    for(int i = 1;i<=n;i++){
    	cin>>vec[i];
    }
	presum[0] = 0;
    for(int i = 1;i<=n;i++){
    	presum[i] = presum[i-1]+vec[i];
    }

    int q;cin>>q;

    for(int i = 0;i<q;i++){
    	int a,b;cin>>a>>b;
    	cout << presum[++b]-presum[a]<<endl;

    }
    
    return 0;
}
