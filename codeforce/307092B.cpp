// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n>>m;
    int a[n+1];
    int b[m+1];
    for(int i =1;i<=n;i++){
    	cin >> a[i];
    }

    for(int i =1;i<=m;i++){
    	cin>>b[i];
    }
    int j = 1;
    int count = 0;
    for(int i = 1;i<=m;i++){
    	while(j<=n and b[i]>a[j]){
    		count++;
    		j++;
    	}

    	cout << count <<" ";
    }
    
    return 0;
}
