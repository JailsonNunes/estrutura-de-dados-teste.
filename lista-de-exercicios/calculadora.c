#include <stdio.h>
 
int main()
{
int fat, num;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%i", &num);
 
for(fat = 1; num > 1; num = num - 1)
fat = fat * num;
 
printf("Fatorial calculado: %i", fat);
return 0;
}