//
//  main.c
//  EntranceQuizXcode
//
//  Created by binbin on 2022/1/6.
//

#include <stdio.h>
int sumSquares(int min, int max) {
    int sum = 0;
    for (int i = min;i <= max;i++) {
        sum += i * i;
    }
    return sum;
}

float sumList(float *array, int n) {
    float sum = 0;
    for (int i = 0;i < n;i++) {
        sum += array[i];
    }
    return sum;
}

//很久没用c，发现对于二维数组参数必须定义列的大小
void initArray(int array[][6], int row, int column) {
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < column;j++) {
            if (i == j) {
                array[i][j] = 0;
            }
            else {
                array[i][j] = (i+1) * (j+1);
            }
        }
    }
}

int xor(int A, int B) {
    return A ^ B;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int number = 0;
    scanf("%d", &number);
    if (number == 1) {
        int min, max;
        scanf("%d %d", &min, &max);
        printf("sumSquares %d\n", sumSquares(min, max));
    }
    else if (number == 2) {
        float array[100] = {1.5, 2.0, 3.2, 4.8};
        int n = 4;
        printf("sumList %f", sumList(array, n));
    }
    else if (number == 3) {
        int array[3][6];
        int row = 3;
        int column = 6;
        initArray(array, row, column);
    }
    else if (number == 4) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", xor(A, B));
    }
    return 0;
}
