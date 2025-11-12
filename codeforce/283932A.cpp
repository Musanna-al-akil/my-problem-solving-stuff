// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

long long w,h,n;

bool f(long long x){

	long long a = (x/w);
	long long b = (x/h);
	if(b==0) return false;
	return a  >= (double)n/b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w>>h>>n;

    long long l = 1, r = 1e14, ans = 0;

    while(l<=r){
    	long long  mid = l + (r-l)/2;
    	if(f(mid)){
    		ans = mid;
    		r = mid-1;
    	}else{
    		l = mid+1;
    	}
    }

    cout <<ans<<endl;

    
    return 0;
}
