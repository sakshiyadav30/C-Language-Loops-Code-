#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d are:\n", n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    return 0;
}