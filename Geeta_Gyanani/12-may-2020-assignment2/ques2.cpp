#include <iostream>
using namespace std;
#define m 4


int main()
{
	int x=27;
	int a[m][m]= { {10, 20, 30, 40},
                   {15, 25, 35, 45},
                   {27, 29, 37, 48},
                   {32, 33, 39, 50}};
 int i=0,j=m-1;
while(i<m && j>=0)
{
  if(a[i][j]==x)
		{
		
		cout<<a[i][j]<<" found at"<<i<<","<<j;
		break;
	}	
	if(a[i][j]>x)
		j--;
		else
		i++;
	
}
return 0;
}

