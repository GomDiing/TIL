#include <stdio.h>
#include <string.h>

int main() {
    char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

    char *ptr = strstr(s1, "den");

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strstr(ptr+1, "den");
    }
}