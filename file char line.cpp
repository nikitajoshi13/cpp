#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int cha=0,lines=0;
	char ch;
	char filename[50];
	ifstream fin;
	
	cout<<"enter the filename\n";
	cin>>filename;
	
	fin.open(filename);
	if(!fin)
	{
		cout<<"file cannot be opened";
		exit(1);
	}
	while(fin.get(ch))
	{
		cha++;
		if(ch=='\n')
           lines++;	
	}
	if(cha>0)
	{
		lines=lines+1;
		cout<<"\nNumber of lines"<<lines;
		cout<<"\n Number of char"<<cha;
	}
	else
	cout<<"\nfile is empty";
}

