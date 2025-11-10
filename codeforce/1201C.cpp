// https://codeforces.com/contest/1201/problem/C

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
int n,k;
int a[N];

bool f(int x){
    long long cp = k;
    for(int i = (n/2)+1; i<=n;i++){
        if(a[i]<x){
            cp -= x-a[i];   
        }
    }

    return cp>=0;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;

    for(int i =1; i <= n;i++){
    	cin>> a[i];
    }

    sort(a+1,a+n+1);

    int lf = 0; int rt = 2e9+5; int ans = 0;

    while(lf<=rt){
        int mid = (lf + (rt-lf)/2);
        
        if(f(mid)){
            ans = mid;
            lf = mid+1;
        }else{
            rt = mid-1;
        }
    }

    cout << ans<<"\n";
    
    return 0;
}
