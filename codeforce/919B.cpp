// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int f(long long x){
	int count = 0;
	while(x){
		count += x%10;
		x =x/10;
	}
	return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    
    long long ans = 0;
    while(t){
    	ans++;
    	int num = f(ans);
    	if(num == 10){
    		t--;
    	}
    }
    cout<<ans<<endl;
    return 0;
}
