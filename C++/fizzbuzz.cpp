#include <iostream>
#include <string>
using namespace std;

int main() {
    for (int i=1; i<=100; i++) {

        string output = "";

        if (i % 3 == 0) {
            output += "Fizz";
        };

        if (i % 5 == 0) {
            output += "Buzz";
        };

        if (output == "") {
            cout << i;
        } else {
            cout << output;
        };
        cout << "\n";
    }
    return 0;
}
