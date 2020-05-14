#include <iostream>
using namespace std;
#define m 3
#define n 6

int main()
{
	int i,j,c=0,k=0;
	int a[m][n]= {
{1, 1, 0, 0, 1, 1},
{0, 1, 0, 1, 0, 0},
{1, 1, 1, 0, 1, 0}};


	for(i=0;i<n;i++)
	{   c=0;
	    
		for(j=0;j<m;j++)
		{   
			if(a[j][i]==1)
			c++;
	    }
	    if(c%2!=0)
	    k++;
	    
    }
    cout<<k;
	return 0;
}
