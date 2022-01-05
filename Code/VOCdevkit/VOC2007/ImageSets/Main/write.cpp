#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream os1("test.txt");
ofstream os2("val.txt");
ofstream os3("train.txt");
ofstream os4("trainval.txt");
int main()
{
	for(int i=1;i<=62;i++)
	{
		os3<<i<<endl;
		os4<<i<<endl;
	}
	for(int j=63;j<=79;j++)
	{
		os1<<j<<endl;
		os2<<j<<endl;
	}
	
} 
