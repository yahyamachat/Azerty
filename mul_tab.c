#include "header1.h"

unsigned int mul_tab (unsigned char * Data , int a)
{
int i;
for (i=0 ; i<a ;i++)
{
Data[i] = Data[i] * Data[i];
}
return ;
}