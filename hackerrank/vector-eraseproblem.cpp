// https://www.hackerrank.com/challenges/vector-erase/problem

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);


    for(int i=0;i<n;i++){

    	cin >> arr[i];
    }

    int q1,q2,q3;
    cin>>q1>>q2>>q3;

    arr.erase(arr.begin()+q1-1);
    arr.erase(arr.begin()+q2-1,arr.begin()+q3-1);

    cout << arr.size()<<endl;

  	for(auto xe:arr){

    	cout << xe<<" ";
    }
    
    return 0;
}
