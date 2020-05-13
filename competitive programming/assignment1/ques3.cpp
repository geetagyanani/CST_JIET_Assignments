
#include <bits/stdc++.h> 
using namespace std; 


int solve(int low, int high, int D) 
{ 
	while (low <= high) { 
		int mid = (low + high) / 2; 

		
		if ((mid * (mid + 1)) == D) 
			return mid; 

		 
		if (mid > 0 && (mid * (mid + 1)) > D && 
						(mid * (mid - 1)) <= D) 
			return mid - 1; 

		
		if ((mid * (mid + 1)) > D) 
			high = mid - 1; 

		
		else
			low = mid + 1; 
	} 
	return -1; 
} 

 
int main() 
{ 
	int D = 15; 


	int ans = solve(1, D, 2 * D); 


	if (ans != -1) 
		ans--; 

	cout << "steps = "
		<< ans << endl; 
	return 0; 
} 

