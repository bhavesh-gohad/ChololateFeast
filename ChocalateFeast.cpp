#include<iostream>
#include <stdio.h>
using namespace std;

int ChocolateFeast(int n,int c,int m)
{
	int wrapper = n/c;
	int count=wrapper;
	
	while(wrapper>=m)
	{
		wrapper -= m;
		count++;
		wrapper++;	
	}
	return count;	
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,c,m;
		cin>>n>>c>>m;

		int ans=ChocolateFeast(n,c,m);
		cout<<ans<<endl;
	return 0;
}
