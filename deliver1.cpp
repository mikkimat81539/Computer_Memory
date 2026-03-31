/*There is 1 tenant, 1 safe deposit box which can hold 8 letters (1 byte = 8 bits) and you are the mailman (CPU).
The tenant wants you to store there letters in the mailbox.

Create a program that stores 8 letters (1 package)*/

#include <iostream>

using namespace std;

int main() {

    unsigned char package1 = 'A'; // 1 char = 1 byte = 8 bits

    short int package2 = 2; // 1 short int = 2 bytes = 16 bits
    
    int package3 = 3; // 1 int = 4 bytes = 32 bits

    long int package4 = 7; // 1 long int = 8 bytes = 64 bits

    cout << package1 << endl;
    cout << "The size of package 1 is " << sizeof(package1) << endl; // gives the size in bytes

    cout << package2 << endl;
    cout << "The size of package 2 is " << sizeof(package2) << endl; 

    cout << package3 << endl;
    cout << "The size of package 3 is " << sizeof(package3) << endl; 

    cout << package4 << endl;
    cout << "The size of package 4 is " << sizeof(package4) << endl; 

    return 0;
}

