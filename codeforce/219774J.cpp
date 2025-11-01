// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin >> n;

   int arr[n];
   
   for(int i = 0; i <n;i++){
   	cin >> arr[i];
   }

   int min = arr[0];

   for(int i = 1; i <n;i++){
   	if(arr[i]< min){
   		min = arr[i];
   	}
   }
   int count = 0;
   for(int i = 0;i<n;i++){
   	if(arr[i]==min){
   		count++;
   	}
   }

   if(count % 2 ==0){
   	cout << "Unlucky"<<endl;
   }else{
   	cout << "Lucky"<<endl;
   }

   return 0;
}
