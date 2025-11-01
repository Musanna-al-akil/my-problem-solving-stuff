// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int arr[n];

   for(int i =0; i<n;i++){
   	int temp;
   	cin >>temp ;
   	arr[i] = temp;
 
   }
   int isFound = 1;

   for(int i =0; i<n;i++){
   	int temp;

   	cin >> temp;
   	int found = 0;

   	for(int j = 0;j<n;j++){
   		if(arr[j]==temp){
   			arr[j] = 0;
   			found = 1;
   			break;
   		}
   	}
   	if(found == 0){
   		isFound = 0;
   		break;
   	}
   }

   if(isFound){
   	cout << "yes"<<endl;
   }else{
   	cout << "no"<<endl;
   }
   
   return 0;
}
