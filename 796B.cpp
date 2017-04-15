#include <iostream>
using namespace std;
int main ()
{
	long long int n ,m ,k;
	cin>>n>>m>>k;
	int a[1000000]={0};
	for (long long int i = 0; i <= n; ++i)
	{
		a[i]=0;
	}
	long long int temp;
	for (long long int i = 0; i < m; ++i)
	{
		cin>>temp;
		a[temp]=1;
		
	}
	long long int temp1,temp2;
	long long int finalpost=1;
	long long int flag=0,flag1=0;
	

	for (long long int i = 0; i < k; ++i)
	{
		cin>>temp1>>temp2;
		if(finalpost==temp1)
			finalpost=temp2;
		else finalpost=temp1;
		if(a[finalpost]==1&&flag1==0){
			flag=finalpost;
			flag1=1;
		}
	}
	if(flag1==1){
		cout<<flag<<endl;

	}
	else cout<<finalpost<<endl;
	return 0;
}