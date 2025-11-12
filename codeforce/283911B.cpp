// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n>>k;

    vector<int> vec;
    vec.push_back(-1);

    for(int i = 1;i <=n;i++){
    	int temp;
    	cin>>temp;
    	vec.push_back(temp);
    }


  
    while(k--){
    	int x;cin>>x;
    	int l = 1, r = n, ans = 0;
	    while(l<=r){
	    	int mid = l +(r-l)/2;
	    	if(vec[mid]<=x){
	    		ans = mid;
	    		l=mid+1;
	    	}else{
	    		r= mid-1;
	    	}
	    }

	    cout << ans <<endl;

 	}

    
    return 0;
}
