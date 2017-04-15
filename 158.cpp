#include <iostream>
using namespace std;
int main ()
{
	long long int t;
	cin>>t;
	long long int one=0,two=0,three=0,count=0,temp;
	for (int i = 0; i < t; ++i)
	{
		cin>>temp;
		if(temp==1)
			one++;
		if(temp==2)
			two++;
		if(temp==3)
			three++;
		if(temp==4)
			count++;

		
	}
	if(three-one>=0){
		one=0;
		count=count+three;
	}
	else{
		one=one-three;
		count=count+three;
	}

	if(two%2==0){
		count=count+two/2;
	}
	else{
		if((two%2)*2-one>=0){
			count=count+two/2+two%2;
			one=0;}
			else{
				count=count+two/2+two%2;
			one=one-2;

			} 


		

		
		
	}
	if(one<=4&&one>0){
		count++;
		one=0;
	}
	else {
		count =count+one/4;
		one=one%4;
	}
	if(one>0)
		count++;

	cout<<count<<endl;



	return 0;
}