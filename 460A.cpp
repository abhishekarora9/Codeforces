#include <iostream>
using namespace std;
int main ()
{
	long long int n ,m ;
	cin>>n>>m;
	long long int total_stock=0;
	total_stock=n;
	long long int buffer=0,count=0;


	for (int i = 1; total_stock!=0; ++i)
	
	{
		
		buffer=0;
		if(i%m==0){
			buffer++;
		}
		total_stock--;
		count++;
		total_stock=total_stock+buffer;
		

		


		
	}
	cout<<count<<endl;

	return 0;
}