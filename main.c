#include <stdio.h>
#define PI 3.14159f

int main() {
    // Define constant variables
    const int intConst = 10;
    const char charConst = 'A';
    const float floatConst = 3.14f;

    // Print values
    printf("Integer: %d\n", intConst);
    printf("Character: %c\n", charConst);
    printf("Float: %.2f\n", floatConst);

    const int immutableConst; // Uninitialized constant
    // immutableConst = 5; // Uncommenting this line will result in a compilation error
    // Alternative: Initialize during declaration
    const int InitializedConst = 5;
    printf("Properly initialized constant: %d\n", InitializedConst);

    //Using define preprocessor
    printf("The value of PI: %.5f\n", PI);
    
    return 0;
}
