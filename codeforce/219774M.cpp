// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int arr[n];

   for(int i = 0; i<n;i++){
   	cin >>arr[i];
   }
   
   int min = arr[0];
   int max = arr[0];
   int minPos = 0;
   int maxPos = 0;

   for(int i = 1; i<n;i++){
   	if(min>arr[i]){
   		min = arr[i];
   		minPos = i;
   	}
   	if(max<arr[i]){
   		max = arr[i];
   		maxPos = i;
   	}
   }

 	arr[minPos] = max;
 	arr[maxPos] = min;

 	for(int i = 0; i<n;i++){
   	cout << arr[i] << " ";
   }

   return 0;
}
