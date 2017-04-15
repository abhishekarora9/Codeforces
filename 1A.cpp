#include <iostream>
using namespace std;
int main(){
	long long int a,b,c;


	cin>>a>>b>>c;
	long long int temp1,temp2,temp3;
	temp1=a/c;
	temp2=b/c;
	if(a%c!=0)
		temp1++;
	if(b%c!=0)
		temp2++;

	cout<<temp1*temp2<<endl;
	return 0;
}