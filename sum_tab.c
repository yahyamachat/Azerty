#include "header1.h"

unsigned int sum_tab (unsigned char * Data , int a)
{
int i;
for (i=0 ; i<a ;i++)
{
Data[i] = Data[i] * 2;
}
return ;
}