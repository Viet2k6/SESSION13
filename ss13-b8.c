#include <stdio.h>
int timUCLN(int a, int b) {
    int UCLN = 1;  
    int min;

    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            UCLN = i;  
        }
    }
    return UCLN;
}

int main() {
    int firstNumber, secondNumber;
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &firstNumber);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &secondNumber);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", firstNumber, secondNumber, timUCLN(firstNumber, secondNumber));
    return 0;
}
