#include <iostream>
using namespace std;
int main()
{
	int a=0,n,i,c=0,b=1;
	cout<<"  enter the number till you want the series";
	cin>>n;
	 for(i=0;i<n;i++)
   {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
   }

}
