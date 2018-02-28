#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	void get_data()
	 {
    	cout<<"\nenter value of x";
		cin>>x;
	 } 		 
		class B
		 {
		   private:
		   int y;
		   
		   public:
		   	void get_data()
			{
				cout<<"enter value of y";
				cin>>y;
			}
			void add()
			{
				A a;
				a.get_data();
				cout<<"x= "<<a.x<<" "<<"y= "<<y;
				cout<<"\n SUM= "<<a.x+y;
		}
		};
};
int main()
{
	A::B b;
	b.get_data();
	b.add();
	
}

