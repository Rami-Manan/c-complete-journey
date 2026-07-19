#include <stdio.h>

#define SUBJECTS 5

struct Student
{
    char  name[50];
    int   rollNo;
    float marks[SUBJECTS];   /* Array inside structure */
    float total;
    float percentage;
    char  grade;
};

/* Calculate total, percentage and grade */
void calculateResult(struct Student *s)
{
    int i;
    s->total = 0;

    for(i = 0; i < SUBJECTS; i++)
        s->total += s->marks[i];

    s->percentage = s->total / SUBJECTS;

    if(s->percentage >= 90)      s->grade = 'A';
    else if(s->percentage >= 75) s->grade = 'B';
    else if(s->percentage >= 60) s->grade = 'C';
    else if(s->percentage >= 40) s->grade = 'D';
    else                         s->grade = 'F';
}

int main()
{
    struct Student s;
    char *subjects[] = {"Maths", "Physics", "Chemistry", "English", "C Programming"};
    int i;

    printf("Enter Name   : "); scanf("%s", s.name);
    printf("Enter Roll No: "); scanf("%d", &s.rollNo);

    for(i = 0; i < SUBJECTS; i++)
    {
        printf("Enter %s marks: ", subjects[i]);
        scanf("%f", &s.marks[i]);
    }

    calculateResult(&s);

    printf("\n========== REPORT CARD ==========\n");
    printf("Name       : %s\n",   s.name);
    printf("Roll No    : %d\n",   s.rollNo);
    printf("----------------------------------\n");
    for(i = 0; i < SUBJECTS; i++)
        printf("%-15s : %.2f\n", subjects[i], s.marks[i]);
    printf("----------------------------------\n");
    printf("Total      : %.2f / %d\n", s.total, SUBJECTS * 100);
    printf("Percentage : %.2f%%\n",    s.percentage);
    printf("Grade      : %c\n",        s.grade);
    printf("==================================\n");

    return 0;
}
