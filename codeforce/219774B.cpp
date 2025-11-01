//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;


int main() {
   int n;
   cin >> n;

   int arr[n];

   for(int i=0; i<n;i++){

   	cin >> arr[i];

   }


   int search;

   cin >> search;

   for(int i=0;i<n;i++){
   	if(arr[i]==search){
   		cout << i <<endl;
   		return 0;
   	}
   }

   cout << -1<<endl;
   
   return 0;
}
