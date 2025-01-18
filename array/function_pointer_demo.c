#include <stdio.h>
#include <stdint.h>
 
int fun(int num)
{
    printf("%d",num);
    return 0;
}
 
int main()
{
    //int (*func)(int) = fun; //this is also correct
    int (*func)(int);
    func = &fun;
    func(5);
    return 0;
}
