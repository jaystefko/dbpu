#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *a = malloc(__INT_MAX__ * sizeof(int));
   realloc(a,0);
   return 0;
}
