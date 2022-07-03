#include<iostream>
using namespace std;
class Rectangle
{
	public:
		int l,b;
		Rectangle(int i,int j)
		{
			l=i;
			b=j;
		}
		void area()
		{
			cout<<"Area Of Rectangle = "<<l*b;
		}
};
int main()
{
	Rectangle r(10,5);
	r.area();
	return 0;
}
