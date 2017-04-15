#include <iostream>
using namespace std;
int main ()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	int a[100000];
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	long long int totalcostleft=10000000,totalcostright=10000000;
	for (int i = m-1; i >0; i--)
	{
		if(a[i]!=0&&a[i]<=k)
		{
			totalcostleft=abs(i-m)*10;
			break;
		}
		
		
	}
	for (int i = m+1; i <=n; i++)
	{
		if(a[i]!=0&&a[i]<=k)
		{
			totalcostright=abs(i-m)*10;
			break;
		}
		
	}
	cout<<min(totalcostleft,totalcostright)<<endl;

	return 0;
}