#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter number of rows:";
	cin>>rows;
	for(inti=1;i<=rows;++i)
	{
		for(intj=1;j<=i;++j)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
