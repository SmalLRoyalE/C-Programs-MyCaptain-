#include <stdio.h>
int Findlcm(int x, int y);
int main()
{
    int num1, num2, LCM;
    printf("Input first number: ");
    scanf("%d",&num1);   
    printf("Input second number: ");
    scanf("%d",  &num2);
    if(num1 > num2)
        LCM = Findlcm(num2, num1);
    else
        LCM = Findlcm(num1, num2);
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    return 0;
} 
int Findlcm(int x, int y)
{
    static int multiple = 0;
    multiple += y;
    if((multiple % x == 0) && (multiple % y == 0))
    {
        return multiple;
    }
    else
    {
        return Findlcm(x, y);
    }
}
