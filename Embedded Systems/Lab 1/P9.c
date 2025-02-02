#include <stdio.h>
//works

// Function to modify a specific bit
int modify_bit(int num, int bit, int override) {
    int adjusted_bit = bit - 1;  // Adjust for 1-based bit indexing

    if (override == 1) {
        return num | (1 << adjusted_bit);  // Set the bit to 1
    } else {
        return num & ~(1 << adjusted_bit); // Clear the bit to 0
    }
}

int main() {
    int val, bit, override;

    // Take user inputs
    printf("Enter integer:\n");
    scanf("%d", &val);

    printf("Enter bit:\n");
    scanf("%d", &bit);

    printf("Enter override:\n");
    scanf("%d", &override);

    // Ensure override is only 0 or 1
    if (override != 0 && override != 1) {
        printf("Invalid override value. Please enter 0 or 1.\n");
        return 1;
    }

    // Modify the bit
    int new_val = modify_bit(val, bit, override);

    // Print the modified value
    printf("%d\n", new_val);

    return 0;
}
