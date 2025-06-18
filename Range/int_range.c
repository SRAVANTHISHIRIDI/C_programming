//this program is to understand the range of integer datatype(4 bytes)
/*Modifiers are the ones which is used to alter the size of memory those are 
    1-->short(memory lesser than original one)(2 bytes)
    2-->long(more memory than original)(4 bytes)
    3-->signed(allows positive and negative values)(default one)
    4-->unsigned(allows only positive values
	
	limits.h header file consists of symobolic constants that represent the minimum and maximum values of datatype specifed*/
#include <stdio.h>
#include<limits.h>
int main()
{
   /*	int var1=INT_MIN;
  	int var2=INT_MAX;
  	printf("range of signed integer is from :%d to %d",var1,var2);*/  //-2147483648 to 2147483647
  	/*unsigned int var1=0;
  	unsigned int var2=UINT_MAX;
  	printf("range of unsigned integer is from :%u to %u",var1,var2);*/ //0 to 4294967295
  	/*short int var1=SHRT_MIN;
  	short int var2=SHRT_MAX;
  	printf("range of signed integer is from :%d to %d",var1,var2);   */  //-32768 to 32767
  	/*short unsigned int var1=0;
    short unsigned int var2=USHRT_MAX;
  	printf("range of unsigned integer is from :%u to %u",var1,var2);   */  // 0 to 65535
  	/*long int var1=INT_MIN;
  	long int var2=INT_MAX;
  	printf("range of signed integer is from :%ld to %ld",var1,var2); */    //same as int 
  	return 0;
}
