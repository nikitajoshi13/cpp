#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("array.txt",ios::binary);
	int arr[10]={10,50,66,90,88,97,86,45,99,80};
	int arr1[10]={0};
	fout.write((char *)arr,sizeof(arr));
	fout.close();
	ifstream fin;
	fin.open("array.txt",ios::binary);
	fin.read((char *)arr1,sizeof(arr));
	cout<<"\n marks obtained";
	for(int i=0;i<10;i++)
	{
		cout<<"\t"<<arr1[i];
	}
}
