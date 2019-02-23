#include <stdio.h>
#include <ctype.h>
int main(int argc, char * argv[])
{
	
	int num1;
	int num2;
	int first_column_value;
	int second_column_summ;
	char term;
	printf("Введите первое число: ");
	//Проверка на верность введенных данных
	if (scanf("%i%c", &num1, &term) != 2 || term != '\n') {
               	printf("Необходимо ввести число! Выход из программы!");
		return 0;	
	}
	printf("Введите второе число: ");
	if (scanf("%i%c", &num2, &term) != 2 || term != '\n') { 
               	printf("Необходимо ввести число! Выход из программы!");
		return 0;       
	}
	printf("Умножаю число %i на %i\n", num1, num2);
	//Присваиваем начальное значение в первой колонке
	first_column_value = num1;
	second_column_summ = 0;
	//Пока значение первой колонки не равно 1
	printf("|%8s|%8s|%8s|\n","Число 1 ", "Число 2 ", "Сумма   ");
	while (first_column_value != 1) {
		//Если число нечетное - добавляем значение второго числа (при первом цикле оно аналогично введенному)
		if (first_column_value % 2 != 0) {
			second_column_summ += num2;
		}
		printf("|%8i|%8i|%8i|\n", first_column_value, num2, second_column_summ);
		//Умножаем число на 2
		num2 *= 2;
		//Делим значение первой колонки нацело на 2
		first_column_value /= 2; 
	}
	// Всегда добавляем крайний элемент (т.к. 1)
	second_column_summ += num2;
	printf("|%8i|%8i|%8i|\n", first_column_value, num2, second_column_summ);
	printf("Результат умножения: %i\n", second_column_summ);
	return 0;
}
