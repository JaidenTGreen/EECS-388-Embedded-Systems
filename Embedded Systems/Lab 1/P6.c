#include <stdio.h>
//works

int strlen(char *str){
    char *ptr = str;
    int length = 0;

    while (*ptr != '\0'){
        length++;
        ptr++;
    }
    return length;
}

int main() {

    char str[50];
    printf("Enter a string: \n");
    scanf("%49[^\n]", str);

    int length = strlen(str);
    printf("%d\n", length);

}
