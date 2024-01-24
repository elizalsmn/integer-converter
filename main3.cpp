#include "d2boh.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int convert, input;
    cout << "convert decimal to (2 for binary, 8 for octal, 16 for hexadecimal): ";
    cin >> convert;
    cout << "input a number : ";
    cin >> input;

    if (convert==2){
        int output[12];
        decimal_to_binary(input, output);
    }
    else if (convert==8){
        int output[12];
        decimal_to_octal(input, output);
    }
    else if (convert==16){
        char output[12];
        decimal_to_hexadecimal(input, output);
    }
    return 0;

}
