#include <stdio.h>

void biggest3() 
{
    int num1, num2, num3, biggest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested ternary approach
    biggest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("%d is the biggest number.\n", biggest);
   // return 0;
}
