#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//works
bool check(int i){
    if (i < 2){
        return false;
    }
    for(int j = 2; j * j <= i; j++){
        if (i % j == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int input;


    printf("Enter a number: \n");
    scanf("%d", &input);

    int out[input]; //stores memory slots up to the input
    int y = 0;

    for (int x = 1; x <= input; x++){
        //printf("test: %d\n", x);
        if (check(x)){
            out[y] = x;
            //printf("%d\n", out[y]); test case
            y++;
        }
    }
    for (int k = 0; k < y; k++)
    {
        printf("%d ", out[k]);
    }
    
}
