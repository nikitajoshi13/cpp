#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[50];
	float sal;
	ofstream outFile("nik.txt");
	for(int i=0;i<3;i++)
	{
		cout<<"enter the name and sallary of emp"<<i+1;
		cin>>name>>sal;
		outFile<<"\n"<<name<<"\t"<<sal;
		
	}
	outFile.close();
	ifstream inpFile("nik.txt");
	for(int i=0;i<3;i++)
	{
		inpFile>>name;
		cout<<"employee "<<i+1;
		cout<<name;
		inpFile>>sal;
		cout<<sal;
	}
	inpFile.close();
}
