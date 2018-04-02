#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	ifstream fin;
	int i,j;
	char ch;
	fout.open("pointer.txt",ios::app);
	cout<<"current position of put pointer is "<<fout.tellp();
	cout<<"\nenter the position where u want to input text";
	cin>>i;
	fout.seekp(3,ios::cur);
	cout<<"\ncurrent position of put pointer is "<<fout.tellp();
    fout<<"hello";
    fout.close();
    fin.open("pointer.txt");
    cout<<"\ncurrent position of get pointer is "<<fin.tellg();
    cout<<"\nenter the position";
    cin>>j;
    fin.seekg(j,ios::cur);
    while(fin.get(ch))
    {
    	cout<<ch;
	}
    
}
