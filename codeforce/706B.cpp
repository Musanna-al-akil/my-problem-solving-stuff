// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec;

    for(int i =0;i<n;i++){
    	int temp;
    	cin>> temp;
    	vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());

    int q;cin>>q;

    while(q--){
    	int m; cin>> m;

    	auto up = upper_bound(vec.begin(),vec.end(),m);

    	cout << up - vec.begin()<<endl;

    }

    
    return 0;
}
