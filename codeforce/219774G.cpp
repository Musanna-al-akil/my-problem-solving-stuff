// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int arr[n];

   for(int i = 0; i<n;i++){
  	cin >> arr[i];
   }

   	int mid = n/2;

   	for(int i =0;i<mid;i++){
   		if(arr[i]!=arr[n-(i+1)]){
   			cout << "NO"<<endl;
   			return 0;
   		}
   	}
   cout << "YES"<<endl;
   
   return 0;
}
