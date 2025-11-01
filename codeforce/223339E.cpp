// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

void convert(int n){
	if(n==0) return;

	convert(n/2);

	cout<< n%2;
	return;
}

int main() {
   int t;
   cin >> t;

   while(t--){
   	int n;

   	cin >> n;

   	if(n==0){
   		cout << 0<<'\n';
   	}
   	else{
   	convert(n);
   	cout <<'\n';
   }
   }
   
   return 0;
}
