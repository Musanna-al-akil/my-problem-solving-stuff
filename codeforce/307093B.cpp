// Author: Musanna Al Akil
 
#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e5+9;
 
int a[N];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    long long s;
    cin >> n>>s;
 
 
    for(int i = 1;i<=n;i++){
    	cin >> a[i];
    }
 
    int r = 1;
    int count = n+1;
 
    long long sum  = 0;
    for(int l = 1;l<=n;l++){
    	while(r<=n and sum <s){
    		sum += a[r];
    		r++;
    	}
    	if(sum >=s){
    		count = min(count,r-l);
    	}
    	sum -=a[l];
    }
    if(count>n){
    	cout << -1 <<endl;
    }else{
 
    cout << count <<'\n';
    }
    return 0;
}