// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q


// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;


   while(t--){

      int n;

      cin>>n;
      int arr[n];

      for(int i =0;i<n;i++){
         cin>>arr[i];
      }
      int count = 0;

      for(int i=0; i<n;i++){
         for(int j=i;j<n;j++){
            int isCount=1;

            for(int k=i;k<=j-1;k++){
               if(arr[k]>arr[k+1]){
                  isCount = 0;
               }
            }
            if(isCount){
               count++;
            }
         }
      }
      cout << count<<endl;

   }
   
   return 0;
}
