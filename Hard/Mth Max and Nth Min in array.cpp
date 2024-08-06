#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[] = {14, 16, 87, 36, 25, 89, 34};
	int n = sizeof(a)/sizeof(a[0]),M,N;
	sort(a,a+n);
	cout<<"Enter M and N values: ";
	cin>>M>>N;
	cout<<M<<" Maximum Number is : "<<a[n-M]<<endl;
	cout<<N<<" Minimum Number is : "<<a[N-1]<<endl;
}
