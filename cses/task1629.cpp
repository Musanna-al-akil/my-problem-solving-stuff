// https://cses.fi/problemset/task/1629

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;

    vector<pair<int,int>> vec;

    for(int i = 0;i<t;i++){
    	int l,r;cin>>l>>r;

    	vec.push_back({l,r});
    }

    sort(vec.begin(),vec.end(),[](pair<int,int> x,pair<int,int> y){
    	return x.second < y.second;
    });

    int max_end = -1;
    int ans = 0;

    for(auto xe: vec){
    	if(xe.first >= max_end){
    		max_end = xe.second;
    		ans++;
    	}
    }
    
    cout << ans<<endl;
    return 0;
}
