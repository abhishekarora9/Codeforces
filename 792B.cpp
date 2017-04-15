#include <iostream>
#include <list>
using namespace std;
int main ()
{
	long long int n , m;
	cin>>n>>m;
	
	list<int> l ;
	for (int i = 1; i <= n; ++i)
	{
		l.push_back(i);
	}
	long long int temp1;
	int *ptr;
	int a[100000];
	for (int i = 1; i <=m; ++i)
	{
		cin>>a[i];
	}

	long long int start =1,eliminated=n,temp=0;
	
	list<int>::iterator location;
	
	location =++l.begin();
	//cout<<*location<<endl;
	long long int printnum=0;
	list<int>::iterator printloc;

	list<int>::iterator j;
	for (int i = 1; i <=m; ++i)
	{
		temp=a[i]%eliminated;
		int count=temp;
		cout<<count<<" ";
		while(count>0)
		{
			
			count--;
			
			
			if(j==l.end())
				j=l.begin();
			else j++;
			printnum=*j;
			printloc=j;



		}
		cout<<printnum<<" ";
		if(printloc==l.end())
		{
			printloc=l.begin();
		}
		else 
		printloc++;
	l.remove(printnum);
	//location=printloc;
	j=printloc;
	if(j==l.end())
		j=l.begin();
	else j++;
	
	cout<<*j<<endl;
	eliminated--;

	
		
		


		
		
	}


	return 0;
}