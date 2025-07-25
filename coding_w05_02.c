#include <stdio.h>
#include <string.h>

int main() {
    // ตัวแปรสำหรับเก็บข้อมูลส่วนตัว
    char name[50];
    int age;
    float height;

    // ตัวแปรสำหรับเก็บข้อมูลวิชาและผลการเรียน
    char subject[50];
    float grade;
    char symbol;

    // รับข้อมูลส่วนตัวจากผู้ใช้
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in cm): ");
    scanf("%f", &height);

    // รับข้อมูลวิชาและเกรด
    printf("Enter subject name: ");
    scanf("%s", subject);

    printf("Enter grade: ");
    scanf("%f", &grade);

    // ตัดเกรดเป็นสัญลักษณ์
    if (grade > 3.5) {
        symbol = 'A';
    } else if (grade > 3.0) {
        symbol = 'B';
    } else if (grade > 2.5) {
        symbol = 'C';
    } else if (grade >= 2.0) {
        symbol = 'D';
    } else {
        symbol = 'F';
    }

    // แสดงผลลัพธ์ข้อมูลส่วนตัว
    printf("\n%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลลัพธ์ผลการเรียน
    printf("In subject %s, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}
