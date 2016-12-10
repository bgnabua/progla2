#include<iostream>
using namespace std;




int sum(int i, int r)
{
	return i+r;
}
int diff(int i,int r)
{
	return i-r;
}
int product(int i, int r)
{
	return i*r;
}
int quotient(int i,int r)
{
	return i/r;
}
int main()
{	
	int i,r;
	cout <<"Enter number 1: ";
	cin>>i;
	cout <<"Enter number 2: ";
	cin>>r;
	cout<<"Sum is:"<<sum(i,r)<<endl;
	cout<< "Difference is:"<<diff(i,r)<<"\n";
	cout<<"Product is:"<<product(i,r)<<"\n";
	cout<< "Quotient is:"<<quotient(i,r)<<"\n";
	return 0;	
}
