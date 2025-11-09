// https://codeforces.com/problemset/problem/501/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

vector<pair<string,string>> name;

int is_present(string fname){
	for(int i = 0; i<name.size();i++){
		if(name[i].second == fname){
			return i;
		}
	}

	return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    for(int i = 0;i<n;i++){
    	string fname,sname;

    	cin>>fname>>sname;

    	if(name.empty()){
    		name.push_back(make_pair(fname,sname));
    	}else{
    		int pos = is_present(fname);
    		if(pos == -1){
    			name.push_back(make_pair(fname,sname));
    		}else{
    			name[pos]= make_pair(name[pos].first, sname);
    		}
    	}
    }

    cout << name.size()<<"\n";

    for(auto [f,s]:name){
    	cout << f << ' '<< s<<'\n';
    }
    
    return 0;
}
