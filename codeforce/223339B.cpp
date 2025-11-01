// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;


void recursion(int n){
	if(n==0) return;

	recursion(n-1);
	cout << n <<endl;
	return;
}

int main() {
   int n;
   cin >> n;

   recursion(n);
   
   return 0;
}
