#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream fin;
	fin.open("text1.txt");
	while(fin.get(ch))
	{
		cout<<ch;
	}
}
