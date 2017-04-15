#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	long long int n,m;
	cin>>n>>m;
	long long int days=0;
	double determinant=0,x1,x2;
	days=days+m;
	if(n==m)
	{
		cout<<n<<endl;
		return 0;
	}
	if(m>n)
	{
		cout<<"1"<<endl;
		return 0;
	}

	for (long long int i = sqrt(n)-1; i < n; ++i)
	{
		double temp=i*(i+1);

		temp=temp/2;
		//cout<<i<<" "<<temp<<" "<<n<<endl;
		if(temp>=n){
			days=days+i;
			break;
		}
		
	}
	determinant = 9 +8*n;
    
    
        x1 = (-3 + sqrt(determinant)) / (2);
        x2 = (-3 - sqrt(determinant)) / (2);
        if(x1>x2)
        	x1=x1;
        else x1=x2;
        long long int temp3=x1;
        if(temp3<x1)
        	x1++;
        
	long long int days2=m,tempn=n;
	days2=days2+x1;
	
	
	if(days2<days)
		cout<<days2<<endl;
	else cout<<days<<endl;
	//cout<<days2<<endl;
	//cout<<days<<endl;

	return 0;
}