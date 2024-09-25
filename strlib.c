

#include <stdio.h>
#include "strlib.h"


int main() {
    // Call functions here if needed
    return 0;
}

// Function definitions
char* str_charAt(char * str, int index) {
    return str[index];
}
char* str_at(char * str, int index) {
    if (index >= strlen(str)) {
        return;
    } else if (index < 0)
    {
        return str[strlen(str) + index];
    } else {
        return str[index];
    }
    
}
void str_toString(int integer) {
    char str[12];
    return "idk";
}
char * str_valueOf(char * string) {
    return string;
}
void str_toLowerCase(char * string) {
    for (int i = 0; i < strlen(string); i++) {
        // from 65 to 90
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
    }

}
void str_toUpperCase(char * string) {
    for (int i = 0; i < strlen(string); i++) {
        // from 97 to 122
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }
}
void str_toLocaleLowerCase(char * string) {
    //what is the difference between toLowerCase and toLocaleLowerCase?
    for (int i = 0; i < strlen(string); i++) {
        // from 65 to 90
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32;
        }
    }
}
void str_toLocaleUpperCase(char * string) {
    //what is the difference between toUpperCase and toLocaleUpperCase?
    for (int i = 0; i < strlen(string); i++) {
        // from 97 to 122
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] -= 32;
        }
    }
}
void str_trim(char * string) {
    // remove leading and trailing spaces
    int i = 0;
    while (string[i] == ' ') {
        i++;
    }
    int j = strlen(string) - 1;
    while (string[j] == ' ') {
        j--;
    }
    for (int k = 0; k < j - i + 1; k++) {
        string[k] = string[i + k];
    }
    string[j - i + 1] = '\0';
}
void str_trimStart(char * string) {
    int i = 0;
    while (string[i] == ' ') {
        i++;
    }
    for (int k = 0; k < strlen(string) - i; k++) {
        string[k] = string[i + k];
    }
    string[strlen(string) - i] = '\0';
}
void str_trimEnd(char * string) {

    int j = strlen(string) - 1;
    while (string[j] == ' ') {
        j--;
    }
    for (int k = 0; k < j + 1; k++) {
        string[k] = string[k];
    }
    string[j + 1] = '\0';
}
void str_concat(char * string1, char * string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    char *newString = (char *)malloc(len1 + len2 + 1);;
    for (int i = 0; i < strlen(string1); i++) {
        newString[i] = string1[i];
    }
    for (int i = 0; i < strlen(string2); i++) {
        newString[strlen(string1) + i] = string2[i];
    }
    if (newString == NULL) {
        // Handle memory allocation failure
        //Forstår ikke helt malloc, men kan ikke se alternativer lige nu
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    newString[strlen(string1) + strlen(string2)] = '\0';
    string1 = newString;
    //Making me scream rn
}
void str_includes() {}
void str_startsWith() {}
void str_endsWith() {}
void str_indexOf() {}
void str_lastIndexOf() {}
void str_slice() {}
void str_substring() {}
void str_repeat() {}
void str_padStart() {}
void str_padEnd() {}
void str_localeCompare() {}
void str_symbolIterator() {}

