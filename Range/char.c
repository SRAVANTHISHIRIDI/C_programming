//this program explains the usage of char in program
/* char is the keyword to declare character. it stores single letter with ' ' quotes. but the letter is represented in 0&1 forms only.
ASCII uses 7 bits means 128 characters. it is the encoding scheme to encode characters into 0 &1s.
Extened ASCII uses 8 bits such ad 256 characters.*/
#include<stdio.h>
int main()
{
	char var=65;
	printf("%c",var); //A
	char var1='a';
	printf("%d",var1); // 97
	return 0;
}
