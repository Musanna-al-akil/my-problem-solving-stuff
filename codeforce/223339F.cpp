// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;


void print(int arr[],int n){
	if(n<0){
		return;
	}
	if(n%2==0){
		cout << arr[n] << ' ';
	}
	
	print(arr,n-1);
}

int main() {
   int n;
   cin >> n;

   int arr[n];

   for(int i = 0;i<n;i++){
   	cin>> arr[i];
   }

   print(arr,n-1);

   
   return 0;
}

