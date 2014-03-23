#include <iostream>
using namespace std;

int swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int sort(int i,int j,int k)
{
	if (i>j)
	{
		swap(i,j);
		if(j>k&&i>k)
		{
			swap(j,k);
			swap(i,j);
			cout<<i<<j<<k<<endl;
		}
		else if(k<j)
			{
				cout<<i<<k<<j<<endl;
		}
		else
		{
			cout<<i<<j<<k<<endl;
		}
	}
	else if(j>i)
	{
		if (i>k)
		{
		cout<<k<<i<<j<<endl;
		}
		else if(j>k)
		{
			cout<<i<<k<<j<<endl;
		}
		else
		{
			cout<<i<<j<<k<<endl;
		}
	}
        else 
	{
		cout<<"wrong"<<endl;
}
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	sort(a,b,c);
}

