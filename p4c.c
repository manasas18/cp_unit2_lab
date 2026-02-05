EXPERIMENT NO -4c 
PROGRAM NAME-p4c.c 
TITLE- Program to demonstrate pointer arithmetic 
Code: 
#include <stdio.h> 
int main() { 
    int arr[] = {10, 20, 30, 40, 50}; 
    int *ptr; 
    int i; 
   ptr = arr;   
 
    printf("Pointer Arithmetic Demonstration:\n"); 
  for (i = 0; i < 5; i++) { 
        printf("ptr = %p, *(ptr) = %d\n", ptr, *ptr); 
        ptr++;    
    } 
    return 0; 
} 
Sample output: 
Pointer Arithmetic Demonstration: 
ptr = 0x7ffc1234ab20, *(ptr) = 10 
ptr = 0x7ffc1234ab24, *(ptr) = 20 
ptr = 0x7ffc1234ab28, *(ptr) = 30 
ptr = 0x7ffc1234ab2c, *(ptr) = 40 
ptr = 0x7ffc1234ab30, *(ptr) = 50
