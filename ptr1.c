#include <stdio.h>

int main()
{
    int x = 1, y = 2, z[10];
    int *ip;          /* ip is a pointer to int */
    ip = &x;          /* ip now points to x */
    printf("%p points to x, value: %i (%i)\n", ip, *ip, x);
    y = *ip;          /* y is now 1 */
    printf("y assigned the value of ip, %p points to x, value: %i (%i)\n", ip, *ip, y);
    *ip = 0;          /* x is now 0 */
    ip = z;           /* ip now points to z[] */
    printf("%p points to z[], value: %i (%p)\n", ip, *ip, z);
}

