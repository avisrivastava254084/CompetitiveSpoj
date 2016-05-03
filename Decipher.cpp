#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int t;
	cin >> t;
	long long int a, b, c;
	//cout << endl;
	while(t--){
		scanf("%lld%lld%lld",&a,&b,&c);
		cout << a*a - 2*b << endl;
	}
	return 0;
}
