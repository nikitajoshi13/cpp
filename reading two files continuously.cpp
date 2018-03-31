#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	char quest[500],ans[200];
	ofstream fout;
	fout.open("Question.txt");
	fout<<"Q1.Who is the PM of India?\n";
	fout<<"Q2.Which virus recently spread in Africa?\n";
	fout<<"Q3.Who won FIFA World Cup 2017?\n";
	fout.close();
	fout.open("Answers.txt");
	fout<<"A1.Narendra Modi\n";
	fout<<"A2.Ebola\n";
	fout<<"A3.Germany\n";
	fout.close();
	ifstream fin,fin1;
	fin.open("Question.txt");
	if(!fin)
	{
	cout<<"error opening file";
    }
	fin1.open("Answers.txt");
	if(!fin1)
	{
	cout<<"error opening file";
    }
	 cout<<"*********************QUIZ*********************";
	while(fin.eof()==0||fin1.eof()==0)
	{
		fin.getline(quest,500);
		cout<<"\n"<<quest;
		
		fin1.getline(ans,200);
		cout<<"\t"<<ans;
	}
	fin.close();
	fin1.close();
	 }
