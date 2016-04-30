#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		if(n==string(n.rbegin(),n.rend()))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;	
}
	


