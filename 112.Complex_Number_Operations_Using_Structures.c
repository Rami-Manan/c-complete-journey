#include <stdio.h>

struct Complex
{
    float real;   /* Real part */
    float imag;   /* Imaginary part */
};

/* Add two complex numbers */
struct Complex addComplex(struct Complex a, struct Complex b)
{
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

/* Multiply two complex numbers */
struct Complex multiplyComplex(struct Complex a, struct Complex b)
{
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

/* Display complex number in a+bi format */
void display(struct Complex c, char *label)
{
    printf("%s: %.2f + %.2fi\n", label, c.real, c.imag);
}

int main()
{
    struct Complex c1, c2, sum, product;

    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum     = addComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    display(c1, "C1");
    display(c2, "C2");
    display(sum,     "Sum");
    display(product, "Product");

    return 0;
}
