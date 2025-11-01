// https://codeforces.com/problemset/problem/26/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	int div = 0;

	if(n<=1){
		return false;
	}

	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			div++;
		}
	}

	if(div>0){
		return false;
	}
	return true;
}

bool isAlmostPrime(int n){
	int primeDiv = 0;

	for(int i = 1; i<n;i++){
		if(n%i==0){
			if(isPrime(i)){
				primeDiv++;
			}
		}
	}

	if(primeDiv ==2){
		return true;
	}

	return false;
}

int main() {
   int n;
   cin >> n;

   int count =0;
   for(int i = 5; i <=n; i++){
   		if(isAlmostPrime(i)){
   			count++;
   		}
   }
   cout << count << endl;
   return 0;
}
