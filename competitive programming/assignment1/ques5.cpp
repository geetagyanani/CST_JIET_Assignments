
#include<bits/stdc++.h> 
using namespace std; 


int Sq(int x) 
{ 
	
	if (x == 0 || x == 1) 
	return x; 

 
	int i = 1, res = 1; 
	while (res <= x) 
	{ 
	i++; 
	res = i * i; 
	} 
	return i - 1; 
} 


int main() 
{ 
	int x = 19; 
	cout << Sq(x) << endl; 
	return 0; 
} 

