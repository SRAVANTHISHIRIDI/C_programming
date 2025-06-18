//this program is to understand about sizeof operator
//sizeof operator is used to find out the size od datatype programmatically
#include<stdio.h>
int main()
{
	printf("%d\n",sizeof(int));             //4
	printf("%d\n",sizeof(short int));       //2
	printf("%d\n",sizeof(long int));        //4
	printf("%d\n",sizeof(long long int));   //8
	printf("%d\n",sizeof(char));            //1
	printf("%d\n",sizeof(float));           //4
	printf("%d\n",sizeof(double));          //8
	printf("%d\n",sizeof(long double));     //16
	return 0;
}
