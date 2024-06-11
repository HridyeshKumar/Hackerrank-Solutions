//Sorting Array of Strings   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Lexicographic sort (non-decreasing order)
int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b);
}
// Reverse lexicographic sort (non-increasing order)
int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b, a);
}
// Count the number of distinct characters in a string
#define CHARS 26
int distinct_chars(const char* a) {
    int dist = 0;
    int chars[CHARS] = {0};
    while (*a != '\0') {
        int chr = (*a++) - 'a';
        if (chr < CHARS)
            chars[chr]++;
    }
    for (int i = 0; i < CHARS; i++)
        if (chars[i])
            dist++;
    return dist;
}
// Sort by number of distinct characters
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int res = distinct_chars(a) - distinct_chars(b);
    return (res) ? res : lexicographic_sort(a, b);
}
// Sort by length
int sort_by_length(const char* a, const char* b) {
    int res = strlen(a) - strlen(b);
    return (res) ? res : lexicographic_sort(a, b);
}
// Simple bubble sort for strings
void string_sort(char** arr, const int len, int (cmp_func)(const char a, const char* b)) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char*)malloc(n * sizeof(char));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        (arr + i) = realloc((arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
