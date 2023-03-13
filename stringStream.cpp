#include <sstream>
#include <iostream>

using namespace std;

int main(void) {
    string s = "My name is Debashish Sarkar Durjoy";

    stringstream ss(s);

    string intermediate;

    while (getline(ss, intermediate, ' ')) {
        cout << intermediate << endl;
    }


    return 0;
}