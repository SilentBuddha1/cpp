#include<iostream>
using namespace std;
class prime
{
	private:
		int a;
	
	public:
		void readvalue()
		{
			cout<<"Enter any number"<<endl;
			cin>>a;
		}
		void display()
		{
			int i,b=0;
			for(i=1;i<=a;i++)
			{
				if(a%i==0)
				b=b+1;
			}
			if(b==2)
			{
				cout<<a<<" is prime number";
			}
			else
			{
				cout<<a<<" is not prime number";
			}
		}
};

int main()
{
	prime p;
	p.readvalue();
	p.display();
}
