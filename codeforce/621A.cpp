// https://codeforces.com/problemset/problem/621/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long sum=0;

    int mino = 1e9;
    int odd = 0;

    for(int i = 0;i<n;i++){
    	int temp;
    	cin>> temp;
    	if(temp %2==1){
    		odd++;
    		mino = min(mino,temp); 
    	}
    	sum +=temp; 
    }
    if(odd%2==0){
    	cout << sum;
    }else{
    	cout << sum - mino;
    }

    return 0;
}
