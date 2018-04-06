#include<iostream>
#include<fstream>
using namespace std;
class employee
{
	int emp_code;
	char name[50];
	int hra;
	int da;
	int ta;
	public:
		void get_data()
		{
			cout<<"\nenter emp code";
			cin>>emp_code;
			cout<<"\nenter name";
			cin>>name;
			cout<<"\nenter hra";
			cin>>hra;
			cout<<"\nenter da";
			cin>>da;
			cout<<"\nenter ta";
			cin>>ta;
			
		}
		void show_data()
		{
			cout<<"\n emp code "<<emp_code;
			cout<<"\nName: "<<name;
			cout<<"\nHRA: "<<hra;
			cout<<"\nDA: "<<da;
			cout<<"\nTA: "<<ta;
		}
};
int main()
{
	ofstream fout;
	fout.open("emp.txt",ios::binary);
	employee e[5];
	cout<<"enter details of 5 employees \n";
	for(int i=0;i<5;i++)
	{
		e[i].get_data();
		fout.write((char *)&e[i],sizeof(e[i]));
	}
	fout.close();
	ifstream fin;
	fin.open("emp.txt",ios::binary);
	for(int i=0;i<5;i++)
	{
		fin.read((char *)&e[i],sizeof(e[i]));
		e[i].show_data();
		
	}
	
}
