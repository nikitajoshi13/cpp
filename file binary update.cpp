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
	employee e;
	fstream fin;
	int n;
	fin.open("emp.txt",ios::ate|ios::in|ios::binary|ios::out);
	cout<<"\nenter the object number whose record has to be updated";
	cin>>n;
	int location=(n-1)*sizeof(e);
	fin.seekp(location);
	cout<<"\nenter the details";
	e.get_data();
	fin.write((char *)&e,sizeof(e));
	fin.seekg(0);
	cout<<"\nfile updated";
	for(int i=0;i<5;i++)
	{
		fin.read((char *)&e,sizeof(e));
		e.show_data();
	}
}
