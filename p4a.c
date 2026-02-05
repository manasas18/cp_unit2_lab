EXPERIMENT NO -4a 
PROGRAM NAME-p4a.c 
TITLE- Program to pass array to a function and print elements  
Code:   
#include <stdio.h> 
void printArray(int a[], int size) { 
    int i; 
    printf("Array elements: "); 
    for (i = 0; i < size; i++) { 
        printf("%d ", a[i]); 
    } 
} 
 
int main() { 
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = 5; 
    printArray(arr, n); 
 
    return 0; 
} 
 
Sample output: 
Array elements: 10 20 30 40 50
