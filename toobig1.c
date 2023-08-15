#include <string.h>
   /*too big; 1st version  */

int main()
{
   /* what happens when the string you're assigning is too big? */

   char x[30];
   char *y = x;

   strcpy(y, "This is too too big! Really!");

   return 0;
}
