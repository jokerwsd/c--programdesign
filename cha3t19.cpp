#include <iostream>

using namespace std;

int main()
{
	int min = 100,max = 999;
	int num = 100;
	while(num>=100 && num<=999)
	{
		int a1,a2,a3;
		a1 = num/100;
		a2 = num%100/10;
		a3 = num%10;

		if (num == a1*a1*a1+a2*a2*a2+a3*a3*a3)
		{
			cout<<num<<endl;
			num++;
		}
		else 
			num++;
	}
	return 0;
}
