#include <stdio.h>
#include <string.h>
void main() {
printf("Sakshi Yadav\n");
char b[100];
int decimal = 0;
printf("Enter a binary number: ");
scanf("%s", b);
for (int i = 0; b[i] != '\0'; i++) {
decimal = decimal * 2 + (b[i] - '0');}
printf("%X\n", decimal);}