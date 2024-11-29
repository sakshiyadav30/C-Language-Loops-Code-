#include <stdio.h>
void main() {
int exp, n;
printf("Sakshi Yadav\n");
printf("Enter the number then the exponent ");
scanf("%d %d", &n, &exp);
int ans = 1;
for (int i = 0; i < exp; i++) {
ans *= n;
}
printf("%d", ans);
}