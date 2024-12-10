#include <stdio.h>

void taoMaTran(int rows, int cols, int matrix[100][100]) {
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("[%d][%d]: ", i + 1, j + 1); 
            scanf("%d", &matrix[i][j]);
        }
    }
}

void inMaTran(int rows, int cols, int matrix[100][100]) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[100][100]; 

    printf("Nhap so hang (toi da 100): ");
    scanf("%d", &rows);
    if (rows > 100) {
        printf("So hang vuot qua gioi han cho phep (toi da 100).\n");
        return 1;
    }

    printf("Nhap so cot (toi da 100): ");
    scanf("%d", &cols);
    if (cols > 100) {
        printf("So cot vuot qua gioi han cho phep (toi da 100).\n");
        return 1;
    }

    taoMaTran(rows, cols, matrix);
    inMaTran(rows, cols, matrix);

    return 0;
}
