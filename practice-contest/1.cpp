// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int r,c;
   cin >> r>>c;

   char arr[r][c];

   int empty = 0;

   for(int i = 0; i<r;i++){
      for(int j =0;j<c;j++){

         cin>>arr[i][j];
      }
   }

   for(int i = 0; i<r;i++){
      for(int j =0;j<c;j++){
         if(arr[i][j] == '.'){
            empty++;
            arr[i][j] = 'p';
         }else{
            break;
         }
        
      }
   }
   for(int i = r-1; i>=0;i--){
      for(int j =c-1;j>=0;j--){
         if(arr[i][j] == '.'){
            empty++;
            arr[i][j]='p';
         }else{
            break;
         }
        
      }
   }

   for(int i = 0; i<c;i++){
      for(int j =0;j<r;j++){
     
         if(arr[j][i] == '.'){
            empty++;
            arr[j][i] = 'p';
         }else if(arr[j][i] == 'p'){
            continue;
         }
         else{
            break;
         }
      }
   }
   for(int i = c-1; i>=0;i--){
      for(int j =r-1;j>=0;j--){
         if(arr[j][i] == '.'){
            empty++;
            arr[j][i]='p';
         }else if(arr[j][i] == 'p'){
            continue;
         }else{
            break;
         }
      }
   }


   // for(int i = 0; i<r;i++){
   //    for(int j =0;j<c;j++){

   //       cout << arr[i][j];
   //    }
   //    cout <<endl;
   // }

   cout << empty <<endl;
   
   return 0;
}
