#include "header2.h"

unsigned char print_tab (unsigned char * Data , int a)
{
int i;
for (i=0 ; i<a ;i++)
printf("%d\n",Data[i]);
return 0;
}