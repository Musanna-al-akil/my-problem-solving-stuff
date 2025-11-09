// https://www.hackerrank.com/challenges/cpp-maps/problem


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<string,int> mm;

    while(t--){
    	int q;
    	string name;
    	cin >> q;
    	if(q == 1){
    		int num;
    		cin>>name>>num;
    		auto it = mm.find(name);
    		if(it == mm.end()){
    			mm.insert({name,num});
    		}else{
    			mm[name]+=num;
    		}
    	}else if(q==2){
    		cin>>name;
    		mm[name] = 0;
    	}else{
    		cin>>name;
    		auto it = mm.find(name);
    		if(it == mm.end()){
    			cout << 0<<"\n";
    		}else{
    			cout << mm[name]<< "\n";
    		}
    	}
    }
    
    return 0;
}
