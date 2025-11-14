// https://codeforces.com/problemset/problem/762/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin >> n>>k;

    vector<long long> vec;
    int count = 0;

    for(long long int i =1; i*i<=n;i++){
    	if(n%i==0){
    		vec.push_back(i);
    		count++;
    		if(n/i!=i){
    			vec.push_back(n/i);
    			count++;
    		}
    	}
    }

    sort(vec.begin(),vec.end());
    if(vec.size()>=k){
    	cout << vec[k-1]<<"\n";
    }else{
    	cout << -1 <<"\n";
    }
    
    return 0;
}
