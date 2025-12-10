// https://codeforces.com/problemset/problem/550/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,l,r,x;cin>>n>>l>>r>>x;

    vector<int> arr(n);

    for(int i = 0; i<n;i++){
    	cin>> arr[i];
    }
    int count = 0;

    for(int mask = 0; mask < (1<<n);mask++){
    	vector<int> vec;
    	int sum = 0;
    	for(int i = 0;i <n;i++){
    		if((mask>>i )& 1){
    			vec.push_back(arr[i]);
    			sum +=arr[i];
    		}

    	}    	
    	sort(vec.begin(),vec.end());
    	
    	if(sum>=l and sum<=r and vec.size()>=2 and ((vec[vec.size()-1]-vec[0])>=x)){
    		count++;
    	}	
    }

    cout << count;
    
    return 0;
}
