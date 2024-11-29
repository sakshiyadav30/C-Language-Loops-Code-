#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    int n, sum = 0, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum of all natural numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
