#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char comment[200];
	char ch,n;
	int len;
	cout<<"enter your feedback";
	cin.getline(comment,200);
	fstream fout;
	fout.open("file123.txt",ios::in|ios::out);
    len=strlen(comment);
	for(int i;i<=len;i++)
	{
		fout.put(comment[i]);
	}
	fout.seekg(0);
	for(int i=0;i<len;i++)
	{
		fout.get(ch);
		cout<<ch;
	}
}
