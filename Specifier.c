#include <stdio.h>

int main()
{
    //double n=2034.54;
    int a=9;
    float b=9;
    //double a=10.45;
    printf("%0.2f\n",b);
 //    printf("%2.2f\n",b);
//    printf("%3.2f\n",b);
//    printf("%4.2f\n",b);
    printf("%5.2f\n",b);
//     printf("%6.2f\n",b);
    printf("%4d\n",a);
    printf("%4.2d\n",a);
    printf("%4.0d\n",a);
    return 0;
}



/*******************************************************************************************************************
OUTPUT:

9.00
 9.00
   9
  09
   9
  *****************************************************************************************************************/
