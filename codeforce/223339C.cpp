//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

// Author: Musanna Al Akil


#include <bits/stdc++.h>
using namespace std;


void recursion(int n){
	if(n==0) return;

	cout << n;
	if(n>1) cout<<' ';
	recursion(n-1);
	return;
}

int main() {
   int n;
   cin >> n;

   recursion(n);
   
   return 0;
}
