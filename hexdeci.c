#include <stdio.h>
#include<stdlib.h>
void main() {
printf("Sakshi Yadav\n");
char hex[100];
int decimal;
printf("Enter a hexadecimal number: ");
scanf("%s", hex);
decimal = strtol(hex, NULL, 16);
printf(" %d\n", decimal);}