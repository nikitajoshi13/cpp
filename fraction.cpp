#include<iostream>
#include<string.h>
using namespace std;
class fraction
{
	private:
	int num;
	int deno;
	void simplify();
	int GCD(int a,int b);
	
	public:
	void get_data();
	void display_data();
	
};
void fraction::get_data()
{
	cout<<"enter numerator\n";
	cin>>num;
	cout<<"enter denominator\n";
	cin>>deno;
	if(deno==0)
	{
		cout<<"fraction not possible";
		exit(1);
	}
}
void fraction::simplify()
{
	int a;
	a=GCD(num,deno);
	num=num/a;
	deno=deno/a;
}
int fraction::GCD(int a,int b)
{ 
   if (b==0)
   return a;
   else
   return GCD(b,a%b);
}
void fraction::display_data()
{
	cout<<"simplified version of the fraction is\n";
	simplify();
	cout<<num<<"/"<<deno;
}
int main()
{
	fraction f1;
	f1.get_data();
	f1.display_data();
}
