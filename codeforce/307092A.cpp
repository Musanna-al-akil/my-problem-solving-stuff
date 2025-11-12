// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n>>m;
    vector<int> vec1,vec2;
    for(int i = 0;i <n;i++){
    	int temp;cin>>temp;

    	vec1.push_back(temp);
    }
    for(int i = 0;i <m;i++){
    	int temp;cin>>temp;

    	vec2.push_back(temp);
    }

    vector<int>final;

    int i =0,j=0;

    while(n>0&&m>0){
    	if(vec1[i]<vec2[j]){
    		final.push_back(vec1[i]);
    		i++;
    		n--;
    	}else{
    		final.push_back(vec2[j]);
    		j++;
    		m--;
    	}
    }

    while(n--){
    	final.push_back(vec1[i]);
    	i++;
    }

    while(m--){
    	final.push_back(vec2[j]);
    	j++;
    }

    for(auto xe:final){
    	cout << xe<<' ';
    }
    
    return 0;
}
