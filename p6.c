EXPERIMENT NO -6 
PROGRAM NAME-p6.c 
TITLE- program to search an element using binary search  
Code: 
#include <stdio.h> 
 
int main() { 
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};  // sorted array 
    int n = 10; 
    int element, low = 0, high = n - 1, mid; 
    int found = 0; 
 
    printf("Enter the element to search: "); 
    scanf("%d", &element); 
 
    while (low <= high) { 
        mid = (low + high) / 2; 
 
        if (arr[mid] == element) { 
            found = 1; 
            break; 
        } 
        else if (element < arr[mid]) { 
            high = mid - 1; 
        } 
        else { 
            low = mid + 1; 
} 
} 
if (found) 
printf("Element %d found at position %d\n", element, mid + 1); 
else 
printf("Element %d not found in the array\n", element); 
return 0; 
} 
Sample output: 
Enter the element to search: 60 
Element 60 found at position 6
