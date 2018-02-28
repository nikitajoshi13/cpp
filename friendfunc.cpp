#include<iostream>
using namespace std;

class B;
class A
{
	private:
	char name[20];
	friend void friend_fun(A a,B b);
	public:
	void get_name()
	{
		cout<<"enter name";
		cin>>name;
	}
};
class B
{
	private:
	int roll_no;
	friend void friend_fun(A a,B b);
    public:
    void get_rollno()
	{
		cout<<"enter roll no";
		cin>>roll_no;
	}
    
	
};
void friend_fun(A a,B b)
{
	cout<<"\nNAME:"<<a.name;
	cout<<"\tRoll No "<<b.roll_no;
}
int main()
{
	A a;
	B b;
	a.get_name();
	b.get_rollno();
	cout<<"Student details\n";
	friend_fun(a,b);

}
