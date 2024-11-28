#include <stdio.h>

int main() {
    int hang = 3, cot = 3; 
    int matrix[3][3] = {
        {9, 2, 3},
        {6, 7, 8},
        {9, 11, 12}
        
    };
    int sum = 0;

    printf("Ma tran da cho chinh la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (hang == cot) {
        for (int i = 0; i < hang; i++) {
            sum += matrix[i][i];
        }
        printf("Tong cac phan tu tren duong cheo phu la: %d\n", sum);
    } else {
        printf("Ma tran khong vuong, khong co duong cheo phu.\n");
    }

    return 0;
}
