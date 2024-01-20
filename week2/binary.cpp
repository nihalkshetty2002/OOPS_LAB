//program to convert decimal to binary
//tarun
//230970005
//21-08-23
#include <iostream>
#include <string>
using namespace std;
int main() {
    int decimalNumber;
	system("clear");
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    string binaryString = "";
    
    if (decimalNumber == 0) {
        binaryString = "0";
    } else {
        while (decimalNumber > 0) {
            int remainder = decimalNumber % 2;
            binaryString = char('0' + remainder) + binaryString; // Convert remainder to character
            decimalNumber /= 2;
        }
    }

    cout << "Binary representation: " << binaryString << endl;

    return 0;
}