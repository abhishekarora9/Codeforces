#include <iostream>
using namespace std;
int main ()
{
	long long int a ,b,flag;
	cin>>a>>b;
	if(a%2==0)
		a=a/2;
	else {
		a=(a/2);
		flag=1;
	}
	long long int totalcount=0;
	totalcount=totalcount+(a*b);
	if(flag==1){
		
			totalcount=totalcount+(b/2);
		
	}
	cout<<totalcount<<endl;
	return 0;
}