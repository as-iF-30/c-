#include <stdio.h>

#include <stdlib.h>

int main() {
int a;
float b,c;
scanf("%f",&b);
a=b;
c=b-a;
if(c==0)
printf("Entered number is integer \n");
else
printf("Entered number is float \n");
return 0;
}
