#include <iostream>

using namespace std;

int main(void) {
    char s[] = "My name is Debashish Sarkar Durjoy";

    char *c = strtok(s, " ");

    while (c != NULL) {
        cout << c << endl;
        c = strtok(NULL, " ");
    }


    return 0;
}