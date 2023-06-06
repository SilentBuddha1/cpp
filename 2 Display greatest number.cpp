#include<iostream>
using namespace std;
class number
{
	private:
		int a,b;
	public:
		void readvalue()
		{
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
		}
		void display()
		{
			if (a>b)
			{
				cout<<"a is greater";
			}
			else
			{
				cout<<"b is greater";
			}
		
		}
		
};
	
int main()
{
	number n;
	n.readvalue();
	n.display();
	return 0;
}
