//this program will explain about what if i exceed the specified range? in int or char!
/*in a 3-bit unsigned range like from 0 to 7
if we want to print 8 then the binary convention is 1000 but initially it is 3-bit.
so the last 000 is into memory as 0 and the 1 is truncated. in the same way, if the value excedds, it came to starting.*/
#include<stdio.h>
int main()
{
	unsigned int var=4294967295;
	//printf("%u",var);             //it prints the same value as assigned
	unsigned int var1=4294967296;
	//printf("%u",var1);               // it has printed 0 because it exceeds the range of the unsigned int
    int var2=2147483648;
	//printf("%d",var2);               // it has printed -2147483648
	char var3=128;
   //printf("%c",var3);
	char var4=-128;
	printf("%c",var4);  // var3 and var4 are same
	return 0;
}
