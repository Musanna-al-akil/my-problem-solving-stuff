//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

const int N = 50;
long long fib[N+1];

void fabonacci(int n){
	fib[1] = 0;
	fib[2] = 1;

	for(int i = 3; i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}

int main() {
   int n;
   cin >> n;

	fabonacci(n); 
	cout <<fib[n]<<endl;  
   
   return 0;
}
