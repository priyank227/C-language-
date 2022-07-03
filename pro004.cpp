 // sum, sub, mul, div for user choice using choice
#include<iostream>
using namespace std;
void cal(int,int,int);
int main()
{
	int i,j,k;
	cout<<"Enter the value of i : ";
	cin>>i;
	cout<<"Enter the value of j : ";
	cin>>j;
	
	cout<<"for sum press 1"<<endl;
	cout<<"for sub press 2"<<endl;
	cout<<"for mul press 3"<<endl;
	cout<<"for div press 4"<<endl;
	
	cout<<"Enter the choice : ";
	cin>>k;
	cal(i,j,k);
	
	return 0;
}
void cal(int i,int j,int c)
{
	if(c==1)
	{
		cout<<"i+j = "<<i+j;
	}
	else if(c==2)
	{
		cout<<"i-j = "<<i-j;
	}
	else if(c==3)
	{
		cout<<"i*j = "<<i*j;
	}
	else if(c==4)
	{
		cout<<"i/j = "<<i/j;
	}
	else
	{
		cout<<"enter valid choice number";
	}
}
