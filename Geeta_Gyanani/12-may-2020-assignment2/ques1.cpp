#include <iostream>
using namespace std;

int main()
{
	int x[][2] = {{1, 3}, {2, 5}};
	int i,j,y,c=0,m=0, flag=0,k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			  
			y=0;
			flag=0;
			if(i-1>=0)
			{
			y=y+ x[i-1][j];
		    }
			if(j-1>=0)
			{
			y=y+ x[i][j-1];
		    }
			if(i+1<2)
			{
			y=y+x[i+1][j];
		   }
			if(j+1<2)
			{
			
			y=y+x[i][j+1];
		   }
			
			m=y/2;  
  for(k = 2; k <= m; k++)  
  {  
      if(y % k == 0)  
      {  
         
          flag=1; 
		  break; 
            
      }  
  }  
  if (flag==0)  
      c++; 
		
	
	}
}
  
	cout<<" number of cells="<<c;
	return 0;
	
}
