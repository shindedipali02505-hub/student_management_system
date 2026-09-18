#include <stdio.h>

int main() {
    char name[50];
    int roll_no, m1, m2, m3, total;
    float percentage;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", roll_no);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
