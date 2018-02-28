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
	complex& sub(complex &obj)
	{
		real=real-obj.real;
		img=img-obj.img;
		return *this;
	}
	complex& compare(complex &obj)
	{
		if(real>obj.real)
		return *this;
		else if(real==obj.real)
		{
			if(img>obj.img)
			return *this;
		}	
		else
			return obj;
		
	}
		/*{
		if(real<obj.real)
		return obj;
		else if(real==obj.real)
		{
			if(img<obj.img)
			return obj;
		}	
		else
			return *this;
		
	}*/
};
int main()
{
	complex c1,c2,c4;
	c1.get_data();
	c2.get_data();
	c4=c1.sub(c2);
	c4.display_data();
	c4=c1.compare(c2);
	c4.display_data();
}
