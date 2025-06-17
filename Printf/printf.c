//this program will make us understand about placeholders in printf statement
//printf("a string constant or placeholder",variable name);
#include <stdio.h>
int main()
{
	int two=2,three=3,six=6;
	int result=(two+three)*six/three;// 10
	printf("I am new to programming but I know how to write arithemtic expressions like this: (%d + %d) *%d /%d)",two,three,six,three);
	printf("and the result of this expression is: %d",result);
	return 0;
}
