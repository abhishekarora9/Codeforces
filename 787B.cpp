#include <iostream>
using namespace std;
int main ()
{
	long long int c,b;
	cin>>c>>b;
	int a[100000];
	int flag=0;
	for (int i = 0; i < b; ++i)
	{
		long long int n;
		cin>>n;
		long long int count=0;

		std::memset(a,0,sizeof a);
		for (int j = 0; j < n; ++j)
		{

			long long int temp=0;
			cin>>temp;
			if(temp==1){
				flag=1;
				count++;
			}
			a[abs(temp)]++;
			if(a[abs(temp)]>1)
			{
				
				flag=1;
				count++;
			}
		}
	}
	if (flag==1)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	return 0;
}