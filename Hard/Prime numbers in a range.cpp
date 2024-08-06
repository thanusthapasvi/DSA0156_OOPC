#include <iostream>
using namespace std;

bool prime(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int m,n;
	cout<<"Enter the Range : ";
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(prime(i))
			cout<<i<<" ";
	}
}
