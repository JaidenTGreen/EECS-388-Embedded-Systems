#include <stdio.h>
//works
int main()
{

    int temp;

    printf("Enter an integer: \n");
    scanf("%d", &temp);
    int* temp_ptr = &temp;

    printf("\n%d\n", temp);
    printf("%d\n", *temp_ptr);
    printf("%p\n", &temp);
    printf("%p\n", temp_ptr);
}
