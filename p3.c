EXPERIMENT NO -3 
PROGRAM NAME-p3.c 
TITLE- Program to insert an element into a sorted array in 
order.          
Code:   
#include <stdio.h> 
 
int main() { 
    int arr[20] = {10, 20, 30, 40, 50};   
    int n = 5 
    int element, i, pos; 
 
    printf("Enter the element to insert: "); 
    scanf("%d", &element); 
    for (pos = 0; pos < n; pos++) { 
        if (element < arr[pos]) { 
            break; 
        } 
    } 
    for (i = n; i > pos; i--) { 
        arr[i] = arr[i - 1]; 
    } 
 
    arr[pos] = element; 
    n++; 
 
printf("Array after insertion: "); 
for (i = 0; i < n; i++) { 
printf("%d ", arr[i]); 
} 
return 0; 
} 
Sample output: 
Enter the element to insert: 35 
Array after insertion: 10 20 30 35 40 50
