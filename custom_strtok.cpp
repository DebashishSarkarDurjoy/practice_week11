#include <iostream>

using namespace std;

char *strtok_custom(char c_arr[], string delim) {
    static char *input = NULL;
    char delim_char = delim[0];

    if (c_arr != NULL) input = c_arr;

    if (input == NULL) return NULL;

    char *token = new char[strlen(input) + 1];

    int i = 0;
    for (; input[i] != '\0'; i++) {
        if (input[i] != delim_char) {
            token[i] = input[i];
        }
        else {
            token[i] = '\0';
            input += i + 1;
            return token;
        }
    }

    input = NULL;
    token[i] = '\0';

    return token;
}

int main(void) {
    char arr[] = "My name is Debashish Sarkar Durjoy";

    char *c = strtok_custom(arr, " ");
    while (c != NULL) {
        cout << c << endl;
        c = strtok_custom(NULL, " ");
    }

    return 0;
}