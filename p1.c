EXPERIMENT NO -1 
PROGRAM NAME-p1.c 
TITLE- Program to count number of elements in array 
Code:  
#include <stdio.h> 
int main () 
{ 
} 
int arr [ ] = {10, 20, 30, 40, 50};    
int count; 
count = sizeof(arr) / sizeof(arr[0]); 
printf("Number of elements in the array = %d\n", count); 
return 0; 
Sample output: 
Number of elements in the array = 5
