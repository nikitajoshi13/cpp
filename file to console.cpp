#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream fin;
	fin.open("text1.txt",ios::in);
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
}
