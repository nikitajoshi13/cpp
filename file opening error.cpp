#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("noname.txt");   #no such file existed in my system
	if(!fin)
	cout<<"error opening file";
	exit(1);
}
