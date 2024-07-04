#include <stdio.h>

int main(void)
{

char a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);

if (a < '9')
{
putchar(',');
putchar(' ');
}

else
{
putchar('\n');
}
}

return (0);
}
