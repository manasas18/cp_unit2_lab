EXPERIMENT NO -4b 
PROGRAM NAME-p4b.c 
TITLE- Program to access array elements using pointer 
Code:  
#include <stdio.h> 
 
int main() { 
    int arr[] = {10, 20, 30, 40, 50}; 
    int *ptr;      // pointer to int 
    int i; 
 
    ptr = arr;     // pointer points to first element 
 
    printf("Array elements using pointer:\n"); 
 
    for (i = 0; i < 5; i++) { 
        printf("%d ", *(ptr + i));   // accessing elements using pointer 
    } 
 
    return 0; 
} 
Sample output: 
Array elements using pointer:10 20 30 40 50
