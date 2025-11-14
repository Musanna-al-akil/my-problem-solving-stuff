// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int n,a;cin>>n>>a;

    	vector<int> vec(n);

    	int x = 0,y = 0,z = 0;
    	for(int i = 0;i <n;i++){
    		cin>>vec[i];
    		if(vec[i]==a){
    			y++;
    		}else if(vec[i] <a){
    			x++;
    		}else{
    			z++;
    		}
    	}

    	if(x>=(y+z)){
    		cout << a-1<<'\n';
    	}else{
    		cout << a+1<<'\n';
    	}

    }
    
    return 0;
}
