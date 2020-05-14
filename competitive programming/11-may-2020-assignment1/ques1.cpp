#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int *c,size,n=0,i;
cout<<"enter the size";
cin>>size;
c = new int[size];
 for(i=0;i<size;i++)
      {
	cin>>c[i];
        }
  for(i=0;i<size;i++)
       {
	      n=n^c[i];
       }
       cout<<"output="<<n;
}
