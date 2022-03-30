//? 4) Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficient a ,b and c :");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    //! the roots are real and different i.e <0
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root 1 = %.2lf \n root 2 = %.2lf ", root1, root2);
    }

    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        root2 = root1;
        printf("root 1 = %.2lf \n root 2 = %.2lf ", root1, root2);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
/*
The standard form of a quadratic equation is:

ax2 + bx + c = 0, where
a, b and c are real numbers and
a != 0

The term b2; - 4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.

    If the discriminant is greater than 0, the roots are real and different.
    If the discriminant is equal to 0, the roots are real and equal.
    If the discriminant is less than 0, the roots are complex and different.

// ?

!If the discriminant > 0,

root1 = -b + underroot(v)(b2 - 4ac)/2a


root2 =  -b - v(b2 - 4ac) /2a



!If the discriminant = 0, root1 = root2 =  -b /2a

!If the discriminant < 0,

root1 = -b/2a + i v-(b² - 4ac)/2a


root2 =  -b/2a -  i v-(bʻ- 4ac)/2a



*/