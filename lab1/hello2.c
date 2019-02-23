#include <stdio.h>
#include <ctype.h>
int main(int argc, char * argv[])
{
	char name[256];
	printf("Введите ваше имя: ");
	scanf("%s", name);
	name[0] = toupper(name[0]);
	printf("Привет, %s !\n", name);
	return 0;
}
