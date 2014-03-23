//Chapter 3

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	char c1,c2;
	c1 = getchar();
	c2 = getchar();

 while(c1!='\n'&&c2!='\n')
	{
        putchar(c1);
	putchar(c2);
	break;
        }
    cout<<c1<<c2<<endl;
    return 0;

}


