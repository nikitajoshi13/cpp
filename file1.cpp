#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		char name[50];
		int roll_no;
		float marks;
		void getdata()
		{
			cout<<"enter name,roll no,marks";
			cin>>name>>roll_no>>marks;
		}
		void showdata()
		{
			cout<<"\nName: "<<name;
			cout<<"\nRoll No."<<roll_no;
			cout<<"\nMarks "<<marks;
		}
};
int main()
{
	ofstream fout;
	fout.open("file.txt");
	student obj;
	obj.getdata();
	obj.showdata();
	fout<<"\nName: "<<obj.name;
	fout<<"\nRoll No."<<obj.roll_no;
	fout<<"\nMarks "<<obj.marks;
}
