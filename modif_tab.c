#include "header2.h"

unsigned char modif_tab (unsigned char * Data , int a)
{
int i;
for (i=0 ; i<a ;i++)
{
if (Data[i] > 200)
Data[i] = 0;
}
return ;
}