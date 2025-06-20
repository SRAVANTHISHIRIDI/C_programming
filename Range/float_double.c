//this program will explain the fundamental datatypes in C
/*Float double long double
  -->these are used to represent fractional or real numbers. like 3.14 0.00099etc
  -->float has 4 bytes, doubke has 8 bytes,long double takes 12 bytes
  -->float have precision upto 7 decimal places
  -->double have precision upto 16 decimal places
  -->long double have precision upto 19 decimal places
  -->%.2f refers to it should print the 2 decimal places after decimal point
  -->%Le is the format specifier for long double*/
#include<stdio.h>
int main()
{
	float var1=3.1415926535897932;
	double var2=3.1415926535897932;
	printf("%.16f\n",var1);
	printf("%.16lf\n",var2);
	 long double var4 = 3.141592653589793238462L;

    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Using %%Lf: %.21Lf\n", var4);
    printf("Using %%Le: %.21Le\n", var4);

    return 0;
	return 0;
}
