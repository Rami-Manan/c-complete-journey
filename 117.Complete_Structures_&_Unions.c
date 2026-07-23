/*
 * Program     : Structures & Unions - All Concepts in One Program
 * Description : Covers all major concepts:
 *               → Basic structure
 *               → Structure with functions (using pointer)
 *               → Array of structures
 *               → Nested structures
 *               → Union and memory comparison
 *               → typedef for cleaner syntax
 */

#include <stdio.h>
#include <string.h>

/* ════════════════════════════════════════════
   NESTED STRUCTURE: Address inside Student
   ════════════════════════════════════════════ */
struct Address
{
    char city[30];
    int  pinCode;
};

/* ════════════════════════════════════════════
   MAIN STRUCTURE with nested Address
   typedef gives it a cleaner alias
   ════════════════════════════════════════════ */
typedef struct
{
    char           name[50];
    int            rollNo;
    float          marks[3];    /* Array inside structure */
    float          total;
    char           grade;
    struct Address addr;        /* Nested structure */
} Student;

/* ════════════════════════════════════════════
   UNION: All members share same memory
   Size = size of largest member (float = 4B)
   ════════════════════════════════════════════ */
union Data
{
    int   i;
    float f;
    char  c;
};

/* ── Calculate total and grade ── */
void calculateGrade(Student *s)
{
    int j;
    s->total = 0;
    for(j = 0; j < 3; j++)
        s->total += s->marks[j];            /* Sum all marks */

    float avg = s->total / 3;

    /* Assign grade based on average */
    if(avg >= 90)      s->grade = 'A';
    else if(avg >= 75) s->grade = 'B';
    else if(avg >= 60) s->grade = 'C';
    else               s->grade = 'F';
}

/* ── Display one student's full details ── */
void displayStudent(Student s)
{
    printf("  Name    : %s\n",   s.name);
    printf("  Roll No : %d\n",   s.rollNo);
    printf("  Marks   : %.1f | %.1f | %.1f\n",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("  Total   : %.1f / 300\n", s.total);
    printf("  Grade   : %c\n",   s.grade);
    printf("  City    : %s (%d)\n", s.addr.city, s.addr.pinCode);
}

/* ── Find topper from array of structures ── */
Student findTopper(Student arr[], int n)
{
    int i, topIdx = 0;
    for(i = 1; i < n; i++)
        if(arr[i].total > arr[topIdx].total)
            topIdx = i;
    return arr[topIdx];
}

int main()
{
    int i;

    /* ════════════ ARRAY OF STRUCTURES ════════════ */
    printf("========== STRUCTURES & UNIONS ==========\n\n");

    /* Hardcoded student data for demo */
    Student students[3] = {
        {"Manan",  101, {85, 90, 88}, 0, ' ', {"Ahmedabad", 380001}},
        {"Raj",    102, {70, 65, 72}, 0, ' ', {"Surat",     395001}},
        {"Priya",  103, {95, 92, 98}, 0, ' ', {"Vadodara",  390001}}
    };

    int n = 3;

    /* Calculate grades for all */
    for(i = 0; i < n; i++)
        calculateGrade(&students[i]);

    /* Display all students */
    printf("── ALL STUDENTS ──\n");
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i+1);
        displayStudent(students[i]);
    }

    /* Find and display topper */
    Student topper = findTopper(students, n);
    printf("\n── TOPPER ──\n");
    displayStudent(topper);

    /* ════════════ UNION DEMO ════════════ */
    printf("\n── UNION vs STRUCT MEMORY ──\n");

    union Data u;
    struct { int i; float f; char c; } s;

    printf("Size of struct : %lu bytes\n", sizeof(s));
    printf("Size of union  : %lu bytes\n", sizeof(u));

    /* All members share same memory in union */
    u.i = 65;
    printf("\nUnion after u.i = 65:\n");
    printf("  u.i = %d\n", u.i);
    printf("  u.c = %c\n", u.c);   /* 65 = ASCII 'A' */

    u.f = 3.14;
    printf("Union after u.f = 3.14:\n");
    printf("  u.f = %.2f\n", u.f);
    printf("  u.i = %d (same bytes, different type)\n", u.i);

    return 0;
}
