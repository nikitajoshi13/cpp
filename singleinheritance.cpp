#include<iostream>
using namespace std;
class base
	{
		public:
			base()
			{
				cout<<"this is the base class\n";
			}
	};
class derived1:public base
	{
		public:
			derived1()
			{
				cout<<"this is derived class\n";
			}
   };
int main()
{
	derived1 ob;
		cout<<"end\n";
}
