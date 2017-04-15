#include <iostream>
#include <cmath>
#include <tgmath.h>
using namespace std;
int main ()
{
	double a,b;
	cin>>a>>b;
	/*float ans=b/a;
	
	ans=log(ans);
	//cout<<ans<<endl;
	float ans2=log(1.5);
	//cout<<ans2<<endl;
	double ans3=ans/ans2;
	ans3=ceil(ans3);
	if(pow(3,ans3-2)*a>pow(2,ans3-2)*b){
cout<<ans3-2<<endl;
		return ans3-2;
	}
	if(pow(3,ans3-1)*a>pow(2,ans3-1)*b)
	{cout<<ans3-1<<endl;
		return ans3-1;
	}
	if(pow(3,ans3)*a>pow(2,ans3)*b){
	cout<<ans3<<endl;
		return ans3;
	}
	if(pow(3,ans3+1)*a>pow(2,ans3+1)*b)
	{cout<<ans3+1<<endl;
		return ans3+1;
	}

	
	//cout<<log(5.5)<<endl;
	*/
	long long int count=0;
	for (long long int i = 1; i < 1000000; ++i)
	{
		if(3*a>2*b)
		{
			cout<<i<<endl;
			break;

		}
		else {
			a=a*3;
			b=b*2;
		}
	}

	return 0;
}