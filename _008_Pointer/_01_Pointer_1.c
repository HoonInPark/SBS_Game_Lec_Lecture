#include <stdio.h>

// �����͸� �̿��Ͽ� �� ������ ���ϴ� �Լ� (���ҽ� ����)
void addNumbers(int* a, int* b, int* result, int size) {
    for (int i = 0; i < size; i++) {
        result[i] = a[i] + b[i];
    }
}

void main() {
    int array1[5] = { 1, 2, 3, 4, 5 };
    int array2[5] = { 5, 4, 3, 2, 1 };
    int sumArray[5];

    // �� �迭�� ����
    addNumbers(array1, array2, sumArray, 5);

    // ��� ���
    printf("Sum Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", sumArray[i]);
    }
}
