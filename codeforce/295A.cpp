// https://codeforces.com/contest/295/problem/A
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int N = 1e5+9;

ll a[N],d[N],op[N];
int l[N],r[N],x[N];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin >> n>>m>>k;

    for(int i = 1;i<=n;i++){
    	cin>>a[i];
    }

    for(int i = 1;i<=n;i++){
    	d[i]=a[i]-a[i-1];
    }

    for(int i = 1;i<=m;i++){
    	cin>>l[i]>>r[i]>>x[i];
    }

    for(int i = 1;i<=k;i++){
    	int lt,rt;
    	cin>>lt>>rt;

    	op[lt]++;
    	op[rt+1]--;
    }

    for(int i = 1;i<=m;i++){
    	op[i] += op[i-1];
    }

    for(int i = 1;i<=m;i++){
    	d[l[i]] += x[i] * op[i];
    	d[r[i]+1] -=x[i]*op[i];
    }

    // for(auto xe:d){
    // 	cout << xe<<endl;
    // }

    for(int i = 1;i<=n;i++){
    	d[i] +=d[i-1];
    	cout << d[i]<<' ';
    }
    
    return 0;
}
