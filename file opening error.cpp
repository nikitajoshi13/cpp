#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("noname.txt");
	if(!fin)
	cout<<"error opening file";
	exit(1);
}
