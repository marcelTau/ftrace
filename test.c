#include <stdio.h>

void bar()
{
}

void foo()
{
    bar();
}

int main()
{
    foo();

    printf("this is ftrace");
    return 0;
}
