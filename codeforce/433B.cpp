// https://codeforces.com/problemset/problem/433/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> costs(n+1,0);

    for(int i = 1; i<=n;i++){
    	cin>>costs[i];
    }

    vector<long long> desc = costs;

    sort(desc.begin(),desc.end());

    for(int i = 1;i<=n;i++){
    	desc[i]=desc[i-1]+desc[i];
    	costs[i]=costs[i-1]+costs[i];
    }



    int q;

    cin>>q;

    while(q--){
    	int q,l,r;

    	cin>>q>>l>>r;



    	if(q==1){
    		cout<< costs[r]-costs[l-1]<<"\n";
    	}else{
    		cout<< desc[r]-desc[l-1]<<"\n";

    	}

    }

    
    return 0;
}
