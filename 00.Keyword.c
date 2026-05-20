#include <stdio.h>

int main() {

    int choice;

    printf("=========================================\n");
    printf("  OLD + NEW C PROGRAMMING KEYWORDS\n");
    printf("=========================================\n\n");

    printf("Enter 1 to display all C keywords: ");
    scanf("%d", &choice);

    if(choice == 1) {

        /*
        OLD TURBO C KEYWORDS
        */

        printf("\n===== OLD TURBO C KEYWORDS =====\n\n");

        /*
        auto
        - Default local variable storage class
        */
        printf("auto\n");

        /*
        break
        - Terminates loop or switch
        */
        printf("break\n");

        /*
        case
        - Used inside switch statement
        */
        printf("case\n");

        /*
        char
        - Character data type
        */
        printf("char\n");

        /*
        const
        - Constant variable
        */
        printf("const\n");

        /*
        continue
        - Skips current loop iteration
        */
        printf("continue\n");

        /*
        default
        - Default block in switch
        */
        printf("default\n");

        /*
        do
        - Used in do-while loop
        */
        printf("do\n");

        /*
        double
        - Double precision decimal type
        */
        printf("double\n");

        /*
        else
        - Executes when condition is false
        */
        printf("else\n");

        /*
        enum
        - Creates named constants
        */
        printf("enum\n");

        /*
        extern
        - Declares external global variable
        */
        printf("extern\n");

        /*
        float
        - Decimal datatype
        */
        printf("float\n");

        /*
        for
        - Loop statement
        */
        printf("for\n");

        /*
        goto
        - Jumps to labeled statement
        */
        printf("goto\n");

        /*
        if
        - Conditional statement
        */
        printf("if\n");

        /*
        int
        - Integer datatype
        */
        printf("int\n");

        /*
        long
        - Large integer datatype
        */
        printf("long\n");

        /*
        register
        - Requests CPU register storage
        */
        printf("register\n");

        /*
        return
        - Returns value from function
        */
        printf("return\n");

        /*
        short
        - Small integer datatype
        */
        printf("short\n");

        /*
        signed
        - Stores positive and negative values
        */
        printf("signed\n");

        /*
        sizeof
        - Gives size of datatype/variable
        */
        printf("sizeof\n");

        /*
        static
        - Retains variable value permanently
        */
        printf("static\n");

        /*
        struct
        - Groups different data types
        */
        printf("struct\n");

        /*
        switch
        - Multi-way selection statement
        */
        printf("switch\n");

        /*
        typedef
        - Creates alias for datatype
        */
        printf("typedef\n");

        /*
        union
        - Shares memory among variables
        */
        printf("union\n");

        /*
        unsigned
        - Stores only positive values
        */
        printf("unsigned\n");

        /*
        void
        - Represents no value
        */
        printf("void\n");

        /*
        volatile
        - Variable may change unexpectedly
        */
        printf("volatile\n");

        /*
        while
        - Loop statement
        */
        printf("while\n");



        /*
        NEW C KEYWORDS
        */

        printf("\n===== NEW C KEYWORDS =====\n\n");

        /*
        inline
        - Suggests inline function expansion
        */
        printf("inline\n");

        /*
        restrict
        - Pointer optimization keyword
        */
        printf("restrict\n");

        /*
        _Bool
        - Boolean datatype
        */
        printf("_Bool\n");

        /*
        _Complex
        - Complex number datatype
        */
        printf("_Complex\n");

        /*
        _Imaginary
        - Imaginary number datatype
        */
        printf("_Imaginary\n");

    }

    else {
        printf("Invalid Choice");
    }

    return 0;
}
