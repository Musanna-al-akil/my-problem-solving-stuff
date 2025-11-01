// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

void swaprow(vector<vector<int>> & arr, int n, int x, int y){
	for(int i = 0; i<n;i++){
		swap(arr[x-1][i],arr[y-1][i]);
	}
}

void swapcolumn(vector<vector<int>> & arr, int n, int x, int y){
	for(int i = 0; i<n;i++){
		swap(arr[i][x-1],arr[i][y-1]);
	}
}


int main() {
   int n, x , y;
   cin >> n >> x>>y;

   vector<vector<int>> arr(n,vector<int>(n));

   for(int i =0;i<n;i++){
   	for(int j = 0;j<n;j++){
   		cin>> arr[i][j];
   	}
   }

   swaprow(arr,n,x,y);
   swapcolumn(arr,n,x,y);

   for(auto& row:arr){
   	for(int val: row) cout<< val <<" ";
   	cout <<endl;
   }
   
   return 0;
}
