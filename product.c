#include <stdio.h>
void main() {
int n, sum = 1;
printf("Sakshi Yadav\n");
printf("Enter a number: ");
scanf("%d", &n);
while (n > 0) {
sum *= n % 10;
n /= 10;
}
printf("Sum = %d\n", sum);
}