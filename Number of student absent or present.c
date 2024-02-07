// Author: MD. KARIF HASAN
// Author URL: https://kar1f.github.io/
// WAP prime number or not
#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll_no;
    int attendance;
};

int main() {
    struct student students[100];
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the roll number of student %d: ", i + 1);
        scanf("\n%d", &students[i].roll_no);

        students[i].attendance = 0;
    }

    printf("\n\nAttendance Portal\n\n");

    for (i = 0; i < n; i++) {
        printf("%s (%d) - %d\n", students[i].name, students[i].roll_no, students[i].attendance);
    }

    printf("\n\nMark attendance for a student: ");
    int roll_no;
    scanf("%d", &roll_no);

    for (i = 0; i < n; i++) {
        if (students[i].roll_no == roll_no) {
            students[i].attendance++;
            break;
        }
    }

    printf("\n\nAttendance updated.\n\n");

    for (i = 0; i < n; i++) {
        printf("%s (%d) - %d\n", students[i].name, students[i].roll_no, students[i].attendance);
    }

    return 0;
}
