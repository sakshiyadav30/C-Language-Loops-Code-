#include <stdio.h>
int main() {
    printf("Sakshi Yadav\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Natural numbers from %d to 1 are:\n", n);
    while (n >= 1) {
        printf("%d ", n);
        n--;
    }
    return 0;
}
