EXPERIMENT NO -2b 
PROGRAM NAME-p2b.c 
TITLE- Program to sort an array using insertion sort  
Code: 
#include <stdio.h> 
int main() { 
    int arr[6], i, j, key; 
    printf("Enter 6 integers:\n"); 
    for(i = 0; i < 6; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    for(i = 1; i < 6; i++) { 
        key = arr[i]; 
        j = i - 1; 
 
        while(j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j--; 
        } 
 
arr[j + 1] = key; 
} 
printf("Sorted array in ascending order:\n"); 
for(i = 0; i < 6; i++) { 
printf("%d ", arr[i]); 
} 
return 0; 
} 
Sample output: 
Enter 6 integers: 
7 
3 
9 
1 
4 
2 
Sorted array in ascending order:
1 2 3 4 7 9
