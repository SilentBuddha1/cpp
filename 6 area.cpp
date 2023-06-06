#include<iostream>
using namespace std;
class area
{
	private:
		int length ,breadth;
	
	public:
		void getarea()
		{
			cout<<"Enter the length and breadth"<<endl;
			cin>>length>>breadth;
		}
		void display()
		{
			int area = length * breadth;
			cout<<"Area = "<<area;
		}
};
int main()
{
	area a;
	a.getarea();
	a.display();
}
