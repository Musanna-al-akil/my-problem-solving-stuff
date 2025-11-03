// https://codeforces.com/problemset/problem/200/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    double sum =0;

    for(int i = 0; i<t;i++){
    	double temp;

    	cin>> temp;

    	sum += temp;
    }
    

    cout << fixed<<setprecision(12)<< sum/t<<"\n";
    return 0;
}
