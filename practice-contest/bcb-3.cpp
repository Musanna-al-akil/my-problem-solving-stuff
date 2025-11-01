// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
   int N;

   cin >> N;

   int copy = N;

   int count = 0;

   while(copy){
      int digit = copy%10;
      if(digit == 0){

         copy /= 10;
         continue;
      }
      if(N % digit==0){
         count++;
      }

      copy /= 10;
   }

   cout << count;
   
   return 0;
}
