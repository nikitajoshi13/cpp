#include<iostream>
#include<fstream>>
using namespace std;
class student
{
	public:
	 char name[50];
	 int roll_no;
	 float marks;
	
	 void get_data()
	 {
	 	cout<<"enter name\n";
	 	cin>>name;
	 	cout<<"enter roll no\n";
	 	cin>>roll_no;
	 	cout<<"enter marks\n";
	 	cin>>marks;
	 }
	 void show_data()
	 {
	 	cout<<"\nName: "<<name;
	 	cout<<"\nRoll no: "<<roll_no;
	 	cout<<"\nMarks: "<<marks;
	 }
};
int main()
{
	ofstream fout;
	ofstream fout2;
	fout.open("pass.txt");
	fout2.open("fail.txt");
	student ob1;
	ob1.get_data();
	ob1.show_data();
	if(ob1.marks>50)
	{
	fout<<ob1.roll_no<<"roll no. has passed the examination";
    }
    else
    {
    	fout2<<ob1.roll_no<<"roll no. has not passed the examination";
	}
}
