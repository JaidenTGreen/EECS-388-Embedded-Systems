#include <stdio.h>
// works

void conversion(int num){
    int bits = sizeof(num) * 8;
    int first = 1;

    printf("Binary is: ");

    for (int i = bits - 1; i >= 0; i--){
        if ((num >> i) & 1){
            first = 0;
            printf("1");
        }
        else if (!first){
            printf("0");
        }
    }

    if (first){
        printf("0");
    }
    printf("\n");
}

int bitset(int num, int bit){
    return (num >> bit) & 1;
}

int main()
{
    int input;
    int bit;

    printf("Enter integer: \n");
    scanf("%d", &input);

    printf("Enter bit: \n");
    scanf("%d", &bit);

    conversion(input);

    if (bitset(input, bit)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}
