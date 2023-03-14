#include <iostream>
using namespace std;

char *custom_strtok(char c_arr[], char delim) {
    static char *input = NULL;

    if (c_arr != NULL) input = c_arr;

    if (input == NULL) return NULL;

    char *token = new char[strlen(input) + 1];

    int i = 0;
    for (; input[i] != '\0'; i++) {
        if (input[i] == delim) {
            token[i] = '\0';
            input = input + i + 1;
            return token;
        }
        else {
            token[i] = input[i];
        }
    }

    token[i] = '\0';
    input = NULL;

    return token;
}

int main(void) {
    char c_arr[] = "My name is Debashish Sarkar Durjoy";

    char *c = custom_strtok(c_arr, ' ');
    while (c != NULL) {
        cout << c << endl;
        c = custom_strtok(NULL, ' ');
    }

    return 0;
}