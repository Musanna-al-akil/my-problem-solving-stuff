// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;


   while(t--){
	   	int n;

	   	cin >>n;
	   	int arr[n];

	   	for(int i = 0 ;i<n;i++){
	   		cin>>arr[i];
	   	}
	   	int min=arr[0]+arr[1]+1;

	   for(int i = 0; i<n;i++){
	   	for(int j = i+1; j<n;j++){
	   		if(min>(arr[i]+arr[j])){
	   			min = (arr[i]+arr[j])+j-i;
	   		}
	   	}
	   }

	   cout << min << endl;
   }

   
   return 0;
}
