#include <iostream>
using namespace std;
int main ()
{
	long long int n,m;
	cin>>n>>m;
	int a[100000][];
	long long int temp1,temp2,count=0,totalcount=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>temp1>>temp2;
		a[temp1]++;
		a[temp2]++;
		if(a[temp1]>2){
			cout<<"NO"<<endl;
			return 0;
		}
		if(a[temp2]>2){
			cout<<"NO"<<endl;
			return 0;
		}
		


	}
	//out<<count<<endl;
	
	


	return 0;
}