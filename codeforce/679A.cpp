// https://codeforces.com/gym/101021/problem/1

// Author: Musanna Al Akil

#include <bits/stdc++.h>
using namespace std;

bool query(int x){
	cout << x <<endl;
	string s;
	cin>> s;

	return s =="yes";
}

bool is_prime(int x){
	if(x==2){
		return true;
	}

	for(int i = 2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main() {
    int yes = 0;
    int no = 0;

    if(query(25) || query(49) || query(4) || query(9)){
    	cout << "composite"<<endl;
    	return 0;
    }
  	for(int i =2;i<48;i++){
  		if(is_prime(i)){
	  		if( query(i)){
	  			yes++;
	  		}else{
	  			no++;
	  		}
	  		// cout << i<<endl;
  		}
  	}

  	if(yes>1){
  		cout << "composite"<<endl;
  	}else{
  		cout << "prime"<<endl;
  	}
    
    return 0;
}
