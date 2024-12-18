#include <stdio.h>

int main()
{
    enum rollNO
    {
        Rohan = 60,
        Raja = 90,
        Shailav,
        Arjun,
        Ankur,
        Uttam,
        Harshit
    };

    printf("%d\n", Shailav);
    printf("%d\n", Harshit);

    // creating object student of enum rollNo
    enum rollNO student;
    printf("%d\n", &student);
    student = Shailav;
    printf("%d\n", student);

    // if we can use int to store integral value of a enum so what's need of creating a enum object
    // ...line20
    int s = Shailav;
    printf("%d\n", s);

    return 0;
}