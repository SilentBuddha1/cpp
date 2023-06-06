#include<iostream>
#include<math.h>
using namespace std;
class value
{
	private:
		int x,y;
		
	public:
		void read()
		{
			cout<<"Enter the value of x and power y"<<endl;
			cin>>x>>y;
		}
		void display()
		{
			int a =pow(x,y);
			cout<<"The value of x is "<<a;
		}
};
int main()
{
	value v;
	v.read();
	v.display();
}
