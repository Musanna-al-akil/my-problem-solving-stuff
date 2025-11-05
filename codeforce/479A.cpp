// https://codeforces.com/problemset/problem/479/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	 int a,b,c;

	 cin>> a>>b>>c;

    int w = a+b*c;
	int x = a*(b+c);
	int y = a*b*c;
	int z = (a+b)*c;
	int m = a+b+c;

	if(w>=x && w>=y && w>=z && w>=m){
		cout << w << endl;
	}else if(x>=w && x>=y && x>=z && x>=m){
		cout << x << endl;
	}else if(y>=w && y>=x && y>=z && y>=m){
		cout << y << endl;
	}else if(z>=w && z>=x && z>=y && z>=m){
		cout << z<<endl;
	}else{
		cout << m<<endl;
	}
    
    return 0;
}
