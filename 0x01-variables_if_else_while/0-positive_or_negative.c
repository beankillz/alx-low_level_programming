#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Enty point
 *
 * return - Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n > 0){
printf("is positve\n");
}
else if (n == 0){
printf("is zero\n");
}
else if (n < 0){
printf("is negative\n");
}
else 
{
printf("\n");
}
return (0);
}
