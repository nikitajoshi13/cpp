#include<iostream>
using namespace std;
class Fraction
{
	private:
		int num;
		int deno;
	public:
		Fraction()
		{
			num=0;
			deno=0;
		}
        Fraction(int x,int y);
        void get_data();
        void show_data();
        int Gcd(int x,int y);
        void simplify();
        void operator++();
        void operator--();
};
Fraction::Fraction(int x,int y)
{
	num=x;
	num=y;
}
void Fraction::get_data()
{
	cout<<"\nenter numerator";
	cin>>num;
	cout<<"\nenter denominator";
	cin>>deno;
	if(deno==0)
	{
		cout<<"\nfraction not possible";
		exit(0);
	}
}
void Fraction::show_data()
{
	simplify();
	cout<<"\simplified fraction is"<<num<<"/"<<deno;
}
int Fraction::Gcd(int x,int y)
{
	if(y==0)
	return x;
	else
	return Gcd(y,x%y);
}
void Fraction::simplify()
{
	int n;
	n=Gcd(num,deno);
	num=num/n;
	deno=deno/n;
}
void Fraction::operator++()
{
	num+=deno;
}
void Fraction::operator--()
{
	num-=deno;
}
int main()
{
	Fraction n1,n2,n3;
	n1.get_data();
	n1.show_data();
	cout<<"\nafter prefix increment";
	++n1;
	n1.show_data();
	cout<<"\nafter prefix decrement";
	--n1;
	n1.show_data();
}
