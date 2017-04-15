#include <iostream>
#include <cmath>
using namespace std;
int get_sum(long long int x){
	long long int sum=0;
	while(x!=0){
		sum=sum+x%10;
		x=x/10;
	}
	return sum;

}
int main ()
{
	long long int a , b ,c;
	cin>>a>>b>>c;
	long long int count=0 ;
	int arr[100000];
	if(c==0){
		arr[0]=0;
		count++;
		for (long long int i = 1; i <1000000 ; ++i)
	{

		if(i==(b*pow(get_sum(i),a)+c)){
			arr[count]=i;
			count++;

		}


		
	}
	}


	if(c!=0)

	for (long long int i = 0; i <1000000 ; ++i)
	{

		if(i==(b*pow(get_sum(i),a)+c)){
			arr[count]=i;
			count++;

		}


		
	}
	cout<<count<<endl;
	for (int i = 0; i < count; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;



	return 0;
}