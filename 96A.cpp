#include <iostream>
using namespace std;
int main ()

{
	string s;
	long long int count=1;
	cin>>s;
	for (long long int i = 0; i < s.length()-1; ++i)
	{
		if(s[i]==s[i+1])
			count++;
		else count=1;
		if(count>=7)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}