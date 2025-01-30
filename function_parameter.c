#include <stdio.h>
int add(int a,int b);
int main()
{
    int a=5,b=6;
    int result;
    result=add(a,b);
    printf("%d + %d = %d",a,b,result);
    return 0;
}
int add( int a, int b)
{
    
    return a+b;

}