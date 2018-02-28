#include<iostream>
#include<string.h>
using namespace std;
class idgenerate
{
	private:
	static int id;
	
	public:
	static void id_next()
	{
		cout<<"\n next ID= "<<id++;
	}
};
int idgenerate::id=5; //default initialisation to 0
int main()
{
	idgenerate s1;
	for(int i=1;i<=5;i++)
	{
		idgenerate::id_next();
		
	}	
}
