#include<iostream>
using namespace std;
class circle
{
	private:
		int radious;
		
	public:
		int area()
		{
			cout<<"Enter the radious"<<endl;
			cin>>radious;
			float area = 22/7*radious*radious;
			cout<<"Area = "<<area;
			
		}
};
int main()
{
	circle c;
	c.area();
}
