//this program is to learn about variables and their naming conventions
#include <stdio.h>
int main()
{
	int var=3;
	printf("%d",var);                    it works fine
    int var1,var2,var3;
	var1=var2=var3=5;
	printf("%d %d %d",var1,var2,var3);   it works fine*/
	//printf("%d",VAR);                   VAR undeclared
	//int 9var;                           error:invalid suffix
    //int _var;                           it works but not recommended
    //int $var;                           it also works fine
    //int %var;                           error:expected identifier
    //int my var;                         error:expected underscore or var undeclared
    //int IF=3;                           it also works fine
    //int if=3;                           error:expected identifier
	return 0;
}
