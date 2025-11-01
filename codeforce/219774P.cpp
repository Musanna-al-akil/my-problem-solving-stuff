//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int arr[n];
   for(int i = 0; i<n; i++){
   	cin >> arr[i];
   }
   int isBreak= 0;
   int count = 0;

   while(arr[0]%2==0){
   	for(int i = 0;i<n;i++){
   		if(arr[i]%2==0){
   			arr[i]=arr[i]/2;
   		}else{
   			isBreak=1;
   			break;
   		}
   	}
   	if(isBreak){
   		break;
   	}else{
   		count++;
   	}
   }


   	cout<< count<<endl;
   return 0;
}
