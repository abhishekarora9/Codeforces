#include <iostream>
using namespace std;
int main ()
{
	long long int t,count=0;
	cin>>t;
	while(t--){
		long long int a,b,c,temp=0;
		cin>>a>>b>>c;
		if(a==1)
			temp++;
		if(b==1)
			temp++;
		if(c==1)
			temp++;
		if(temp>=2)
			count++;

	}
	cout<<count<<endl;
	return 0;
}