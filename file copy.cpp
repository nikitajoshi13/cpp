#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fout;
	ofstream fout1;
	fout.open("filem.txt");
	fout1.open("filed.txt");
	char ch;
	while(!fout.eof())
	{
		fout.get(ch);
		fout1.put(ch);
	}
}
