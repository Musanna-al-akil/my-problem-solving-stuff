// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

vector<int> vec;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    for(int i = 0;i <n;i++){
    	int temp;cin>>temp;
    	vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());

    int q;cin>>q;

    while(q--){
    	int n1,n2;cin>>n1>>n2;
    	auto low = lower_bound(vec.begin(),vec.end(),n1);
    	auto high = upper_bound(vec.begin(),vec.end(),n2);

    	cout << (high - vec.begin()) - (low - vec.begin())<<' ';
    }
    
    return 0;
}
