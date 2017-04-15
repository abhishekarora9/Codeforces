#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int n ,count;
	cin>>n;
	count=n;

	int a[100000];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		long long int temp=i;
		while(a[i]!=count){
			i++;
			cout<<endl;
		}
		sort(a+temp,a+i+temp);
		for (int j = temp; j < i+temp; ++j)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
		count=count-i;

	}

	return 0;
}