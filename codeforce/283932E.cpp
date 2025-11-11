// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;
double c;
double f(double x){
	return (x*x+sqrt(x))>=c;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> c;
    double l = 0, r=1e5, ans = 0;
    while(r-l>=1e-7){
    	double mid = l + (r-l)/2;
    
    	if(f(mid)){
    		ans = mid;
    		r=mid;
    	}else{
    		l=mid;
    	}
    }
    
    cout << fixed<<setprecision(10)<< ans <<endl;
    return 0;
}
