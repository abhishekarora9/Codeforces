#include <iostream>
using namespace std;
int main ()
{
	long long int k , n,count=0,temp;
	cin>>k>>n;
	int a[100000];
	for (long long int i = 0; i < k; ++i)
	{
		cin>>a[i];
	}
	n=a[n-1];
	for (long long int i = 0; i < k; ++i)
	{
		if(a[i]>=n&&a[i]>0)
			count++;
		if(a[i]<n)
			break;
	}

	cout<<count<<endl;
	return 0;
}