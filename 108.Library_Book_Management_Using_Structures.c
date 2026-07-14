/*Structure

Definition:-
A structure is a user-defined data type that groups different types of variables under one name, allowing you to represent a real-world entity.
struct Student

SYNTAX :-*/
/*{
    char  name[50];   /* different */
/*    int   rollNo;     /* data      */
/*    float marks;      /* types     */
/*};

struct Student s1;   /* Create variable of type Student */
/*s1.rollNo = 101;     /* Access using dot (.) operator */
/*Union
Definition:-
A union is similar to a structure BUT all members share the same memory location. Only one member can hold a valid value at a time.
union Data

SYNTAX :-
{
    int   i;
    float f;
    char  c;
};


Key Difference — Structure vs Union:
+------------------------------------------------------------------------------------+
| Feature   | Structure                    |  Union                                    |
| Memory    | Each member gets own memory  |  All members share one memory             |
| Size      | Sum of all members           |  Size of largest member                   |
| Access    | All members valid at once    |  Only one member valid at a time          |
| Use       | Store complete records       |  Save memory, store one value at a time   |
+------------------------------------------------------------------------------------+

Example:
struct S { int i; float f; };   /* Size = 4+4 = 8 bytes */
/* union  U { int i; float f; };   /* Size = 4 bytes (largest) */

/*Why use Structures?

Represent real world objects (Student, Employee, Book)
Foundation of linked lists, trees, OOP concepts in C

Why use Unions?

Memory-efficient when only one value needed at a time
Used in embedded systems, hardware programming, compilers */


#include <stdio.h>
#include <string.h>

/* Define book structure */
struct Book
{
    char  title[100];
    char  author[50];
    int   year;
    float price;
};

int main()
{
    struct Book library[50];
    int n, i;
    char search[100];

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    /* Input book details */
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d:\n", i+1);
        printf("Title  : "); fgets(library[i].title,  100, stdin);
        library[i].title[strcspn(library[i].title, "\n")] = '\0';
        printf("Author : "); fgets(library[i].author, 50,  stdin);
        library[i].author[strcspn(library[i].author, "\n")] = '\0';
        printf("Year   : "); scanf("%d",   &library[i].year);
        printf("Price  : "); scanf("%f",   &library[i].price);
        getchar();
    }

    /* Search by title */
    printf("\nEnter title to search: ");
    fgets(search, 100, stdin);
    search[strcspn(search, "\n")] = '\0';

    for(i = 0; i < n; i++)
    {
        if(strcmp(library[i].title, search) == 0)
        {
            printf("\nFound!\nAuthor: %s\nYear: %d\nPrice: %.2f\n",
                   library[i].author, library[i].year, library[i].price);
            return 0;
        }
    }
    printf("Book not found\n");

    return 0;
}







