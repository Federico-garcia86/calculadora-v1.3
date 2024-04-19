#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
int num1, num2,num3;
p("\nsuma:");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
num3=num1+num2;
p(" %d + %d = %d",num1,num2,num3);
p("\nresta");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
num3=num1-num2;
p("\n%d-%d=%d",num1,num2,num3);
p("\ndivision");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
num3=num1/num2;
p("\n%d/%d= %d",num1,num2,num3);
p("\nmultiplicacion");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
num3=num1*num2;
p("\n%d * %d = %d",num1,num2,num3);

return 0;
}
