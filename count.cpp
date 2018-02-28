#include<iostream>
#include<string.h>
using namespace std;
class sample
{
	private:
	int count;
	
	public:
	void set_count()
	{
		count=1;
	}
	void get_count()
	{
		cout<<"\n COUNT= "<<count++;
	}
};
int main()
{
	sample s1,s2,s3;
	s1.set_count();
	s2.set_count();
	s3.set_count();
	s1.get_count();
	s2.get_count();
	s3.get_count();
	s1.get_count();
	
	
}
