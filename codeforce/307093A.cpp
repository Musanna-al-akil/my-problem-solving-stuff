// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
 
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
    int count = 0;
 
    long long sum  = 0;
    for(int l = 1;l<=n;l++){
    	while(r<=n and sum + a[r] <=s){
    		sum += a[r];
    		r++;
    	}
    	sum -=a[l];
    	count = max(count,r-l);
    }
    
    cout << count <<'\n';
    return 0;
}