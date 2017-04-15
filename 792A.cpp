#include <iostream>
using namespace std;
int main ()
{
	long long int n ;
	int a[1000000]={0};
	
	cin>>n;
	for (long long int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	long long int min_dist=100000000, count=0;
	for (long long int i = 0; i < n; ++i)
	{
		for (long long int j = 0; j <n && j !=i; ++j)
		{
			if(abs(a[i]-a[j])<min_dist){
				min_dist=abs(a[i]-a[j]);
				count=1;
				continue;
			}

			if(abs(a[i]-a[j])==min_dist){
				
				count++;
				
			}
		}
	}
	
	cout<<min_dist<<" "<<count<<endl;


	return 0;
}