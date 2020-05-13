
#include <bits/stdc++.h> 
using namespace std; 
  

int XOR(int a[], int n) 
{ 
    
    sort(a, a + n); 
  
    int minX = INT_MAX; 
    int val = 0; 
  
     
    for (int i = 0; i < n - 1; i++) { 
        val = a[i] ^ a[i + 1]; 
        minX = min(minX, val); 
    } 
  
    return minX; 
} 
  

int main() 
{ 
    int a[] = { 4, 5, 3 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    cout << XOR(a, n) << endl; 
  
    return 0; 
} 
