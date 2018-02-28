#include<iostream>
#include<string.h>
using namespace std;
class sample
{
	private:
	static int count;
	
	public:
	void get_count()
	{
		cout<<"\n COUNT= "<<count++;
	}
};
int sample::count=1;
int main()
{
	sample s1,s2,s3;
	s1.get_count();
	s2.get_count();
	s3.get_count();
	
}
