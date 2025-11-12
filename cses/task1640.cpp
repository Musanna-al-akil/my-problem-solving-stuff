// https://cses.fi/problemset/task/1640

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n>>x;

    vector<int> vec;
    vec.push_back(0);

    for(int i = 1;i <=n;i++){
    	int temp;
    	cin>>temp;

    	vec.push_back(temp);
    }
    map<int,int> mp;

    for(int i= 1;i <=n;i++){
    	int diff = x - vec[i];
    	auto find = mp.find(diff);
    	if(find == mp.end()){
    		mp[vec[i]]=i;
    	}else{
    		cout << find->second << ' '<<i<<endl;
    		return 0;
    	}
    }

    cout << "IMPOSSIBLE" <<endl;
    
    return 0;
}
