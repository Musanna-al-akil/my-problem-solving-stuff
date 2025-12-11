//https://codeforces.com/problemset/problem/2126/B
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin >> t;
 
	while(t--){
		int n,k;
 
		cin >> n>> k;
 
		int count=0;
		int hike = 0;
		int ready = 1;
 
		for(int i = 0; i <n;i++){
			int temp;
			cin >> temp;
 
			if(temp == 0 && ready){
				count++;
				if(count == k){
					hike++;
					count =0;
					ready = 0;
				}else{
					ready = 1;
				}
			}else{
				count = 0;
				ready = 1;
			}
		}
		cout << hike << endl;
	}
 
	return 0;
}