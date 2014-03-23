#include <iostream>
using namespace std;

int main()
{	
	for(int j=1;j<=7;j=j+2)
	{
	    for (int i=1;i<=j;i++)
	    {
		cout<<'*';
	    }   
	        cout<<endl;
	}

	for(int j=6;j>1;j=j-2)
	{
	    for (int i=1;i<=j;i++)
	    {
		cout<<'*';
	    }   
	        cout<<endl;
	}
	return 0;
}



