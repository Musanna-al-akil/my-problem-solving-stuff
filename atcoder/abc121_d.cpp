// https://atcoder.jp/contests/abc121/tasks/abc121_d


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

long long fx(long long x){
	if(x%4==3){
		return 0;
	}else if(x%4==0){
		return x;
	}else if(x%4==1){
		return 1;
	}else{
		return 1^x;
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b;
    cin>>a>>b;

    long long x = 0;

    long long ans = fx(b)^(a>0?fx(a-1):0);

    cout << ans<<endl;
    
    return 0;
}
