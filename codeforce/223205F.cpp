// Author: Musanna Al Akil


#include <bits/stdc++.h>
using namespace std;

int main() {
   int a, n;
   cin >> a>>n;

   if(a == 1){
   	cout << n/2<<endl;
   	return 0;
   }

   long long sum = (1LL * 1 * (pow(a*a,ceil((n+1)/2.0))-1))/((a*a)-1)-1;


   cout << sum <<endl;

	   
   return 0;
}
