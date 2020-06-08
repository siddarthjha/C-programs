#include<stdio.h>
#include<math.h>
void fun(int,int);
int main ( )
{ 
int x = 6, y = 5;
if (x < y) 
{
	return (x = x+y);
} 
else
{
	printf("1");
}
printf("z2");
int i=10.000;
printf("%015f",i);
int z=printf("Hello");
printf("%d",z);
printf("Enter number");
int a=scanf("%d",&a);
printf("\n%d\n",a);
printf("%06.4f",20.3256987);
int d=1;
do
{
	printf("\n%d",++d);
}while(d<=9);
int a1[]={1,2,3};
printf("\n%d\n",a1[1]);
printf("%d\n",&a1[1]);
printf("%d\n",*(a1+1));
printf("%d\n",*&a1[1]);
printf("%d\n",a1+1);
printf("%d\n",*(a1+1));
printf("%d\n",a1[1]+1);
char *s1;
int *c1;
//char huge *s2;
//char far *s3;
printf("\n%d %d  ",sizeof(s1),sizeof(c1));
int ab=9;
printf("\n%d",ab>5);
printf("\n%d",(!ab));
switch(ab)
{
	default:
		printf("\nDefault");
	case 10:
		printf("\nCase");
		//break;
	case 1:
		printf("\nCase 1");
		
}
printf("\n%d<< %d",~3);
printf("\n%d",2^3);
int c=9;
printf("\n%d",c++);
printf("\n%d",c--);
printf("\n%d",++c);
printf("\n%d",--c);
i=40;
int j=NULL;
printf("\n%d",sizeof(j));
printf("\n%d",sizeof(NULL));
while(i<9,i<8)
{
	printf("");
}
int s2=5;
fun(s2--,s2++);
fun(++s2,s2--);
printf("\%d",s2++);
enum d{a10,b11,c12};
printf("\n%d\n",d);
int aa=10;
printf("\n%d\n$d",aa,a);
printf("\n%d",printf(""));
static int xa;
printf("\n%d",xa);
printf("\n%f",sqrt(36.0));

float f;
scanf("%f",&f);
int y1;
y1 = int(f+05);
printf("\n%d",y1);

printf("\n%f", f);
printf("\n%f",f+f+f);
}
void fun(int x,int y)
{
	printf("\n%d %d",x,y);
	printf("\n%d %d",x++,y--);
}
