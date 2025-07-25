#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลของผู้ใช้ 3 คน
    char name[3];
    int age[3];
    float height[3], weight[3];
    char grade[3];

    // รับข้อมูลจากผู้ใช้ทั้งหมด 3 คน
    for(int i = 0; i < 3; i++) {
        // รับข้อมูลทั้งหมดใน 1 บรรทัดต่อคน โดยใช้ scanf ต่อเนื่อง
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงผลข้อมูลในรูปแบบตาราง
    printf("+-------+-----+-----------+-----------+------------+\n");
    printf("| Name  | Age | Height(cm)| Weight(kg)| Grade Code |\n");
    printf("+-------+-----+-----------+-----------+------------+\n");

    for(int i = 0; i < 3; i++) {
        // จัดรูปแบบการแสดงผลให้อยู่ในรูปแบบตาราง
        printf("|   %c   | %3d |     %5.1f |     %5.1f |     %c      |\n", 
                name[i], age[i], height[i], weight[i], grade[i]);
    }

    printf("+-------+-----+-----------+-----------+------------+\n");

    return 0;
}
