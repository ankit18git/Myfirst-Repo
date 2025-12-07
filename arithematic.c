#include<stdio.h>
#include<math.h>

int main() {
    int a;
    int b;

    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);
    
    printf("Sum of a and b is %d\n", a + b);
    printf("Sub of a and b is %d\n", a - b);
    printf("Multi of a and b is %d\n", a * b);
    printf("Div of a and b is %d\n", a / b);
    printf("Rem of a and b is %d\n", a % b);

    // Power
    double p = pow(a, b);
    printf("a raised to power b is %.2lf\n", p);

    return 0;
}
