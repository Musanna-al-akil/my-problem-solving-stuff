// https://codeforces.com/problemset/problem/558/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

	map<int,int> pos_mp;
	map<int,int> neg_mp;

    for(int i = 0;i <n;i++){

    	int x,a;
    	cin >> x >> a;


    	if(x>0){
    		pos_mp.insert({x,a});
    	}else{
    		neg_mp[abs(x)]=a;
    	}
    }

    auto pos_sz = pos_mp.size();
    auto neg_sz = neg_mp.size();
    int sum = 0;

    int min_sz = min(pos_sz,neg_sz);

    int countpos=pos_sz>min_sz?min_sz+1:min_sz;
    int countneg=neg_sz>min_sz?min_sz+1:min_sz;

    for(auto [x,y]: pos_mp){
    	if(countpos--){
    		sum +=y;
    	}else{
    		break;
    	}
    }

    for(auto [x,y]: neg_mp){
    	if(countneg--){	
    		sum +=y;
    	}else{
    		break;
    	}
    }

    cout << sum<<endl;
    



    
    return 0;
}
