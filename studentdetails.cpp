#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
	int roll_no;
	char name[20];
	int marks[3];
	int total(void);
	
	public:
	void set_data(int r,char *n,int m1,int m2,int m3);
	void display_data()
	{
		cout<<"\n STUDENT'S DETAILS";
		cout<<"\n ROLL NO:"<<roll_no;
		cout<<"\n NAME:"<<name;
		cout<<"\n MARKS"<<total();
	}
};
inline void student::set_data(int r,char *n,int m1,int m2,int m3)
{
	roll_no=r;
	strcpy(name,n);
	marks[0]=m1,marks[1]=m2,marks[2]=m3;
}
int student::total()
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		sum=sum+marks[i];
		
	}
	return sum;
}
int main()
{
	student s1;
	int r,m1,m2,m3;
	char n[20];
	cout<<"enter the roll number";
	cin>>r;
	cout<<"enter the name";
	cin>>n;
	//cin.ignore();
	//cin.getline(n,20);
	cout<<"enter marks for 3 subjects";
	cin>>m1>>m2>>m3;
	s1.set_data(r,n,m1,m2,m3);
	s1.display_data();
}
	
	

