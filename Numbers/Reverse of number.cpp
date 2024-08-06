#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a numbver : ";
	cin>>n;
	int temp = n;
	int num = 0;
	while(n!=0)
	{
		int d = n%10;
		num = (num*10)+d;
		n = n/10;
	}
	cout<<"Reverse = "<<num;
}
