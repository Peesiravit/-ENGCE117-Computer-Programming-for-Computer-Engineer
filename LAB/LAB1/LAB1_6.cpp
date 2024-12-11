#include <stdio.h>
#include <stdlib.h>  // สำหรับ malloc

int* GetMatrix(int *row, int *col) {
    // ขอให้ผู้ใช้กรอกจำนวนแถวและคอลัมน์
    printf("Enter the number of rows: ");
    scanf("%d", row);
    printf("Enter the number of columns: ");
    scanf("%d", col);

    // จองหน่วยความจำสำหรับเมทริกซ์
    int *value = (int *)malloc(*row * *col * sizeof(int));  // จองหน่วยความจำแบบ 1 มิติ

    if (value == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);  // หากการจองหน่วยความจำล้มเหลว
    }

    // ขอให้ผู้ใช้กรอกค่าของสมาชิกในเมทริกซ์
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &value[i * (*col) + j]);  // เก็บค่าลงในอาเรย์ 1 มิติ
        }
    }

    return value;  // ส่งกลับพอยน์เตอร์ที่ชี้ไปยังอาเรย์
}

int main() {
    int *data, m, n;

    // เรียกใช้งานฟังก์ชัน GetMatrix
    data = GetMatrix(&m, &n);

    // แสดงผลเมทริกซ์ที่ผู้ใช้กรอก
    printf("\nThe matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);  // แสดงสมาชิกในเมทริกซ์
        }
        printf("\n");
    }

    // ปล่อยหน่วยความจำ
    free(data);

    return 0;
} //end function
