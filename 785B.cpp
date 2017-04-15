#include <iostream>
#include <algorithm>


using namespace std;



int main ()
{
	long long int amax=-2,amin=100000000,bmax=-1,bmin=10000000000,a,b;
	long long int tempamax=-2,tempamin=1000000000,tempbmax=-1,tempbmin=1000000000;

	
	cin>>a;
	for (long long int i = 0; i < a; ++i)
	{
		cin>>amax>>amin;
		if(amax>tempamax)
			tempamax=amax;
		if(amin<tempamin)
			tempamin=amin;
	}
	cin>>b;
	long long int temp=0;

	for (long long int i = 0; i < b; ++i)
	{
		cin>>bmax>>bmin;
		if(bmax>tempbmax)
			tempbmax=bmax;
		if(bmin<tempbmin)
			tempbmin=bmin;
	}
	if(tempbmax-tempamin>temp)
		temp=tempbmax-tempamin;
	if(tempamax-tempbmin>temp)
		temp=tempamax-tempbmin;
	cout<<temp<<endl;

	
	
	
	
	return 0;
}