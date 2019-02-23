#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <wchar.h>
#include <wctype.h>
int main(int argc, char * argv[])
{
	setlocale(LC_ALL, "ru_RU.UTF8"); 
	wchar_t name[256];
	printf("Введите ваше имя: ");
	scanf("%ls", name);
	// Просто демонстрация того, что нужно использовать wcslen вместо strlen на примере ограничения длины имени (для корректной работы с киррилицей)
	while (wcslen(name) > 30) {
		printf("Длина имени не должна превышать 30 символов, введите имя заново: ");
		scanf("%ls", name);	
	}
	name[0] = towupper(name[0]);
	printf("Привет, %ls!\n", name);
	return 0;
}
