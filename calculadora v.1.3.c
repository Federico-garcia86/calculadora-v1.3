#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
int num1, num2,res;
p("\nsuma:");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
res=num1+num2;
p(" %d + %d = %d",num1,num2,res);
p("\nresta");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
res=num1-num2;
p("\n%d-%d=%d",num1,num2,res);
p("\ndivision");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
res=num1/num2;
p("\n%d/%d= %d",num1,num2,res);
p("\nmultiplicacion");
p("\ningrese el valor: ");
s("%d",&num1);
p("\ningrese este valor:");
s("%d",&num2);
res=num1*num2;
p("\n%d * %d = %d",num1,num2,res);

return 0;
}
