#include <iostream>

using namespace std;

void swap_123(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void bubbleSort(int a[],int len)
{
	for(int i=0;i<len-1;i++)
{	
		for(int j=0;j<len-i-1;j++)
		{
			if(a[j]>a[j+1])
			
			{
				int *pointer1 = &a[j];
				int *pointer2 = &a[j+1];
				swap_123(pointer1,pointer2);
			}
		}
	}
	for(int k=0;k<len;k++)
	{
		cout<<a[k]<<' ';
		cout<<endl;
	}
}
int main()
{
	int a[]={1,3,7,4,5,6,9,2,8,0};
	const int n = sizeof(a)/sizeof(int);
	bubbleSort(a,n);
	return 0;
}

