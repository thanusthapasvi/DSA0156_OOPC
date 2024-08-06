#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int d;
	cout<<"Enter a number : ";
	cin>>d;
	int n=d,r;
	int a[8];
	for(int i=0;i<=7;i++)
	{
		r = n%2;
		a[i] = r;
		n= n/2;
	}
	reverse(a,a+8);
	for(int i=0;i<=7;i++)
		cout<<a[i];
}
