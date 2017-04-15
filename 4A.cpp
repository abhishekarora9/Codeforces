#include <iostream>
using namespace std;
int main()
{
	long long int n,a,b;
	cin>>n;
	if(n%2==0)
	{
		a=n/2;
		if(a%2==0)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}