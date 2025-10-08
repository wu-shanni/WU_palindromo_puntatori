#include <ctype.h>
#include <stdio.h>

int main(void) {
    char vettore[100] = "pincopallino";
    char *start;
    char *end;
    char *l;
    char *senzaspazio;

    l= vettore;
    senzaspazio = vettore;

    while (*l != '\0' && *l != '\n') {
        if (isalpha(*l)) {
            *senzaspazio = *l;
            senzaspazio++;
        }
        l++;
    }
    *senzaspazio = '\0';


    start = vettore;
    end = vettore;

    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        if (*start != *end) {
            printf("\n Non e' palindroma\n ");
            return 0;
        }
        start++;
        end--;
    }

    printf("\n E' palindroma\n ");
    return 0;
}