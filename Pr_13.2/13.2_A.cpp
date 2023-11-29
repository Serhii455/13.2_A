#include <stdio.h>
#include <conio.h>
#include <cmath>
#include <iomanip>



#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ABS(a) ((a)>= 0? (a) : -(a))
#define PRINT(a) printf(#a " = %d\n", a)
#define IF(condition) ((condition) ? 1 : 0)
#define POW(a,n) pow((a), (n))
#define SQRT(a) sqrt(a)



int main()
{
    int x, y, z;

    printf("Enter the value of x: ");
    scanf_s("%d", &x);

    printf("Enter the value of y: ");
    scanf_s("%d", &y);

    printf("Enter the value of z: ");
    scanf_s("%d", &z);

    int w;

    if (1 < z && z < 3) {
        w = MIN(ABS(x) + ABS(y) + ABS(z), (int)POW(x, 3));
    }
    if(z > 3)
    {
        w = MAX(2 * x + y, (int)POW(2 * y - z, 2));
    } 
    if (z < 1)
    {
        w = 0;
        PRINT(w);
    } else PRINT(w);

    

    return 0;
}
