#include <iostream>
using namespace std;
int main ()
{
	long long int a , b;
	cin>>a>>b;
	long long int c,d;
	cin>>c>>d;
	int a1[100000],a2[100000];
	for (long long int i = 0; i < 1000; ++i)
	{
		a1[i]=b+a*i;
		a2[i]=d+c*i;
		
	}
	int flag=0;
	for (long long int i = 0; i <1000&& flag==0; ++i)
	{
		for (long long int j = 0; j < 1000; ++j)
		{
			if(a1[i]==a2[j])
			{
				flag=1;
				cout<<a1[i]<<endl;;
				return 0;
			}

		}
		
	}
	cout<<"-1"<<endl;
	return 0;
}