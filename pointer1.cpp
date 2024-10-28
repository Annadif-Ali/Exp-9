#include <iostream>
using namespace std;

int main() {
    int a = 10;      // Integer variable
    char ch;         // Character variable
    float f;         // Float variable
    
    char *chptr = &ch; // Pointer to character
    float *fptr = &f;  // Pointer to float
    int *aptr = &a;    // Pointer to integer
    
    cout << aptr << endl;  // Print the address stored in integer pointer
    cout << chptr << endl; // Print the address stored in character pointer
    cout << fptr << endl;  // Print the address stored in float pointer
    
    aptr++; // Increment the integer pointer
    
    return 0;
}

/*
Expected Output Example:
0x7ffeefbff4b8
0x7ffeefbff4b9
0x7ffeefbff4bc
(Note: The actual output addresses will differ each time you run the program, as they are memory addresses.)
*/
