// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

void digit(int n){
	if(n==0) return;

	digit(n/10);

	cout << n%10<<' ';
	return;
}

int main() {
   int t;
   cin >> t;

   while(t--){
   	int n;

   	cin>> n;
   	if(n == 0){
   		cout<<0<<'\n';
   	}else{
	   	digit(n);
	   	cout <<'\n';
   	}
   }
   
   return 0;
}
