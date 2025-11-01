// https://codeforces.com/problemset/problem/1352/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int nonzerodigitcount(int n){
	if(n == 0) return 0;
	int count = 0;
	if(n%10!=0){
		count++;
	}
	count += nonzerodigitcount(n/10);
	return count;
}

void recusum(int n,int a){
	if(n==0) return;

	if(n%10 !=0){
		cout << n%10*pow(10,a-1) << ' ';
		n -= n%10;
	}

	recusum(n/10,a+1);
	return;
}

int main() {
   int t;
   cin >> t;

   while(t--){
   	int n;
   	cin>>n;
   cout<<	nonzerodigitcount(n)<<endl;

   	recusum(n,1);
   	cout <<endl;
   }
   
   return 0;
}
