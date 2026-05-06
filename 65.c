#include <stdio.h>

int strindex(char s[], char t[]) {
    int i, j, k;
    int last = -1;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;

        if (k > 0 && t[k] == '\0') {
            last = i;
        }
    }

    return last;
}


int strindex(char s[], char t[]) {
    int i;         
    int j;          
    int k;          
    int last = -1;  

    for (i = 0; s[i] != '\0'; i++) {

        j = i;
        k = 0;

        while (t[k] != '\0') {

            if (s[j] != t[k]) {
                break;
            }

            j++;
            k++;
        }

        if (t[k] == '\0') {
            last = i;  
        }
    }

    return last;
}