#include<stdio.h>
#include<inttypes.h>

//int f();
//int f();
typedef struct ab
{
	int a;
	int *ac;
}xl;
int main(int argc,char *argv[])
{
	printf("\n%d \n","Hello");
	char *s;
	//x=50;
	int *a;
	extern int i;
	//i=20;
	printf("\n%d %d",sizeof(s),sizeof(a));
	//printf("%d",i);
	//f();
	int ab[5]={2,3};
	int j;
	for(j=0;j<=5;j++)
	{
		printf("\n%d",ab[j]);
	}
	int as[1];
	printf("\nffff==%d",as[1000]);
	int *sx;
	printf("\n\n%d",sizeof(xl));
	return 0;

}


void f()
{
	printf("Hello");
}
