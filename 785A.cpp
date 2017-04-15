#include <iostream>
using namespace std;
int main ()
{
	long long int t,totalsum=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s=="Tetrahedron")
			totalsum+=4;
		if(s=="Cube")
			totalsum+=6;
		if(s=="Octahedron")
			totalsum+=8;
		if(s=="Dodecahedron")
			totalsum+=12;
		if(s=="Icosahedron")
			totalsum+=20;



	}
	cout<<totalsum<<endl;
	return 0;
}