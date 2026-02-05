EXPERIMENT NO -5 
PROGRAM NAME-p5.c 
TITLE- program to search an element using linear search  
Code: 
#include <stdio.h> 
 
int main() { 
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; 
    int n = 10; 
    int element, i, found = 0; 
 
    printf("Enter the element to search: "); 
    scanf("%d", &element); 
    for (i = 0; i < n; i++) { 
        if (arr[i] == element) { 
            found = 1; 
            break; 
        } 
    } 
 
    if (found) 
        printf("Element %d found at position %d\n", element, i + 1); 
    else 
        printf("Element %d not found in the array\n", element); 
 
return 0; 
} 
Sample output: 
Enter the element to search: 70 
Element 70 found at position 7
