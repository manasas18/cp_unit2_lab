EXPERIMENT NO -4d 
PROGRAM NAME-p4d.c 
TITLE- function returning pointer to array element  
Code: 
#include <stdio.h> 
int* getElement(int arr[], int index) { 
return &arr[index];    
} 
int main() { 
int arr[] = {10, 20, 30, 40, 50}; 
int index; 
int *ptr; 
printf("Enter index (0-4): "); 
scanf("%d", &index); 
ptr = getElement(arr, index); 
printf("Element at index %d = %d\n", index, *ptr); 
return 0; 
} 
Sample output: 
Enter index (0-4): 3 
Element at index 3 = 40
