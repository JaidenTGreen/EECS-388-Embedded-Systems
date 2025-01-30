#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//mostly works
bool check(int i){
    if (i <= 1){
        return false;
    } 

    for(int j = 2; j <= sqrt(i); j++){
        if (i % j == 0){
            return false;
        }
    return true;
    }
}

int main()
{
    int input;
    int out[] = {};

    printf("Enter a number: \n");
    scanf("%d", &input);

    int y = 0;

    for (int x = 1; x <= input; x++){
        //printf("%d\n", x);
        if (check(x)){
            out[y] = x;
            printf("%d\n", out[y]);
            y++;
        }
    }
    



    if (check(input)){
        printf("Is a prime");
    }
    else{
        printf("Not a prime");
    }


}