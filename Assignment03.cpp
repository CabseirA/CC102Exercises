#include <iostream>
#include <stdio.h>
using namespace std;

struct Student {
    int id;
    char name[50];
    float grade;
};

void input(struct Student s[], int n);
void display(struct Student s[], int n);

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student obj[100];  

    input(obj, n);          
    display(obj, n);        

    return 0;
}

void input(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].id);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Grade: ");
        scanf("%f", &s[i].grade);
    }
}

void display(struct Student s[], int n) {
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Grade: %.2f\n\n", s[i].grade);
    }
}
