#include<iostream>
using namespace std;
class Number
{
	private:
		int x;
		int y;
	public:
		Number()
		{
			x=0;y=0;
		}
		Number(int a,int b);
		void get_data();
		void show_data();
		void operator++();
		friend void operator--(Number&);
		Number operator++(int);
		friend Number& operator--(Number&,int);
};
Number::Number(int a,int b)
{
	x=a;
	y=b;
}
void Number::get_data()
{
	cout<<"enter two numbers\n";
	cin>>x>>y;
}
void Number::show_data()
{
	cout<<"the numbers are "<<x<<"and"<<y;
}
void Number::operator++()
{
	++x;
	++y;
}
Number Number::operator++(int)
{
	Number n;
	n.x=x++;
	n.y=y++;
	return n;
}
void operator--(Number&n2)
{	
	--n2.x;
	--n2.y;
}
Number& operator--(Number&n3,int)
{
	Number n4;
	n4.x=n3.x--;
	n4.y=n3.y--;
	return n4;
}
int main()
{
	Number n1,n2,n3,n4;
	n1.get_data();
	n1.show_data();
	cout<<"\n after prefix increment\n";
	++n1;
	n1.show_data();
	cout<<"\n after prefix decrement";
	--n1;
	n1.show_data();
	cout<<"\n after postfix increment";
	n4=n1++;
	n4.show_data();
	cout<<"\n after postfix decrement";
	n2=n1--;
	n2.show_data();

}

