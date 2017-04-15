#include <iostream>
using namespace std;
int main ()
{
	long long int n;
	cin>>n;
	string s;

	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		if(s[i]=='+')
			n++;
		else n--;

	}
	cout<<n<<endl;
	return 0;
}