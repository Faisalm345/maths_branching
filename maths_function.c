//This is the line causing issue in the conflict branch
#include <stdio.h>

int main ()
{
int a,b;
printf ("Enter in two numbers\n");
scanf ("%i%i", &a, &b);
printf ("Result = %i\n", a-b);
return 0;
}
