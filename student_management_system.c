#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void addStudent() {

    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "a");

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Student Added Successfully\n");
}

void displayStudents() {

    FILE *fp;
    struct Student s;

    fp = fopen("students.txt", "r");

    while(fread(&s, sizeof(s), 1, fp)) {
        printf("\nID: %d", s.id);
        printf("\nName: %s", s.name);
        printf("\nMarks: %.2f\n", s.marks);
    }

    fclose(fp);
}

int main() {

    int choice;

    while(1) {

        printf("\n===== STUDENT MANAGEMENT =====\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid Choice");
        }
    }

    return 0;
}