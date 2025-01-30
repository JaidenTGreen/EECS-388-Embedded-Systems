#include <stdio.h>
#include <string.h>

int main()
{
  int first;
  char operation;
  int second;
  int result = 0;

  printf("Enter first operand: \n");
  scanf("%d", &first);
 
 

  printf("Enter operation: \n");
  scanf(" %c", &operation);


  switch (operation){
    case 's':
        result = first * first;
        printf("%d", result);
        break;
    case '+':
        printf("Enter second operand: \n");
        scanf("%d", &second);
        result = (first + second);
        printf("%d", result);
        break;
    case '-':
        printf("Enter second operand: \n");
        scanf("%d", &second);
        result = first - second;
        printf("%d", result);
        break;
    case '*':
        printf("Enter second operand: \n");
        scanf("%d", &second);
        result = first * second;
        printf("%d", result);
        break;
    case '/':
        printf("Enter second operand: \n");
        scanf("%d", &second);
        result = first / second;
        printf("%d", result);
        break;

  }
 //if s == true, do square & return 0
  /*if (strcmp(&operation, "s") == 0)
  {
    int result = first * first;
    printf("%d", result);
    return 0;
  }

  printf("Enter second operand: \n");
  scanf("%d", &second);
*/


}