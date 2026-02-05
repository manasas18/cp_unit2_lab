EXPERIMENT NO -7 
PROGRAM NAME-p7.c 
TITLE- array of pointers to structures 
Code: #include <stdio.h> 
struct Book { 
    int id; 
    char title[20]; 
    char author[20]; 
}; 
 
int main() { 
    struct Book b1 = {101, "C-Intro", "Ritchie"}; 
    struct Book b2 = {102, "C-Story", "AAA"}; 
    struct Book b3 = {103, "C-Fab", "XXX"}; 
 
    struct Book *arr[3] = {&b1, &b2, &b3}; 
 
    printf("Book Details:\n"); 
    for (int i = 0; i < 3; i++) { 
        printf("ID: %d, Title: %s, Author: %s\n", 
               arr[i]->id, arr[i]->title, arr[i]->author); 
    } 
 
    return 0; 
} 
Sample output: 
Book Details: 
ID: 101, Title: C-Intro, Author: Ritchie 
ID: 102, Title: C-Story, Author: AAA 
ID: 103, Title: C-Fab, Author: XXX
