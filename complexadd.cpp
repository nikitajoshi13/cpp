#include<iostream>
using namespace std;
class complex
{
	private:
	int real;
	int img;
	
	public:
	void get_data()
	{
		cout<<"enter the real and img part\n";
		cin>>real>>img;
	}
	void display_data()
	{
		cout<<"\n"<<real<<"+"<<img<<"i";
	}
	complex add(complex &obj)
	{
		complex c3;
		c3.real=real+obj.real;
		c3.img=img+obj.img;
		return c3;
	}
};
int main()
{
	complex c1,c2,c4;
	c1.get_data();
	c2.get_data();
	c4=c1.add(c2);
	c4.display_data();
}
