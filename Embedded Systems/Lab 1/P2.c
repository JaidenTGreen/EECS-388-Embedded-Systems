#include <stdio.h>
//works

int main()
{
   int weight;

   scanf("%d", &weight);

   if (weight < 10000)
   {
    printf("Light Duty");
   }
   else if(weight < 26000)
   {
    printf("Medium Duty");
   }
   else
   {
    printf("Heavy duty");
   }
}
