#include<iostream>
using namespace std;
class number
{
	private:
		int a,b;
	public:
		void add()
		{
			cout<<"Enter the two numbers"<<endl;
			cin>>a>>b;
		//}
		//void display()
		//{
			int c=a+b;
			cout<<"The sum of two numbers are "<<c;
		}
};
int main()
{
	number n;
	n.add();
	//n.display();
}
