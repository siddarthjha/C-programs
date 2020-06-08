#include <stdio.h>
#include <stdlib.h>
struct student
{
	char n[30];
	int id;
	float mk;
	
}s1,s2,s3;
int main()
{ 

/*   
const int a=10;
printf("Hello\n") ;
printf("Siddarth Jha");
//hey these are comments 
/*
---------- These are multi-line comments ----------------


*/


/*printf("\nEnter a number");
int n;
scanf("%d",&n);
printf("%d",n);
printf("\nThis was entered number");*/

/*
printf("\nWe will be performing addition of two numbers ");
printf("\nEnter number-1");
int n,n1,s=0;
scanf("%d",&n);
printf("\nEnter number-2");
scanf("%d",&n1);
//s=n+n1;
printf("\nSum of two numbers are %d",s=n+n1);
printf("%d",a);
 */
 
 /*
---------- OUTPUT-PROGRAM -----------------
 
 int i=2,j=3,k,l;
 float a,b;
 k=i/j*j;
 l=j/i*i;
 a=i/j*j;
 b=j/i*i;
 printf("%d,%d,%f,%f",k,l,a,b);
 
 */
 
 /*
-------------- CONVERSION OF KM TO M AND CM ------------------

 int k,m,cm;
 printf("Distance between two cities(in K.M)");
 scanf("%d",&k);
 m=1000*k;
 cm=100*m;
 printf("\nThe distance in Km=%d and in M=%d and in CM=%d",k,m,cm);

*/

/*
---------------- SUM OF DIGITS -------------

int s=0,i,t;
printf("Enter number");
scanf("%d",&i);
while(i!=0)
{
	t=i%10;
	s=s+t;
	i=i/10;
	printf("\nSum now is %d",s);
}
printf("Total sum of didgits is %d",s);

*/

/*
---------------- REVERSE OF NUMBER --------------

int n, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &n);
 
   while (n != 0)
   {
      reverse = reverse * 10;
      printf("\n REVERSE now is %d",reverse);
      reverse = reverse + n%10;
      n       = n/10;
    printf("\n REVERSE AND now is %d",reverse);

   }
 
   printf("Reverse of entered number is = %d\n", reverse);
 
 */
 
 /*
------------------ SUM OF FIRST LAST DIGIT OF NUMBER -------------
 
 int n,n1,n2,sum;
 printf("esnter three digit no");
 scanf("%d",&n);
 n1=n/100;//First digit
 n2=n%10;// last digit
 printf("\n first digit=%d and Last digit=%d",n1,n2);
 printf("Sum=%d",sum=(n1+n2));
 
 */
 
 /*
 
------------ PROGRAM TO CHECK PRIME NUMBER OR NOT -----------
 
 printf("Enter the number to check whether it is prime or not?");
 int i,j,count=0;
 scanf("%d",&i);
 for(j=2;j<i;j++)
 {
 	if(i%j!=0)
 	{
 		count++;
 		printf("\n count=%d",count);
	 }
	 
 }
 if(count<3)
 {
 	printf("Prime number");
 }
 else
 {
 	printf("Not prime number");
 }
 
 */
/*

-----CALL BY REFERNCE METHOD--------

 
 int a=10,b=20;
 func(&a,&b);
 printf("\nAfter Function Call by Reference  a=%d and b=%d",a,b);
 
 */
/*
 ----------------Factorial Function variables ----------------
  
 int n,f;
 printf("Enter the number for which you want the Factorial  ");
 scanf("%d",&n);
 f=fact(n);
 printf("The factorial for %d is %d",n,f);

*/
/*
--------- FIBONACCI SERIES ------
int n,f;
printf("Enter the number for fibonacci series ");
scanf("%d",&n);
f=fib(n);
printf("\n Nth values is %d",f);

*/

/*
--------------- ARRAY DECLARATION AND SORTING OF ARRAY(BUBBLE SORT) ----------------

int i,j,temp;
printf("Enter the size of array");
scanf("%d",&i);
int a[i];
for(j=0;j<i;j++)
{
	scanf("%d",&a[j]);
	//printf("\n %d",a[j]);
}
for(j=0;j<i;j++)
{
	printf("%d,",a[j]);
}
printf("\n We will be now sorting array in ascending order");
for(j=0;j<i;j++)
{
	int k;
	for(k=j+1;k<i;k++)
	{
		if(a[j]>a[k])
		{
			temp=a[j];
			a[j]=a[k];
			a[k]=temp;
			
		}
	}
}
printf("\n We will print sorted Array\n");
for(j=0;j<i;j++)
{
	printf("%d,",a[j]);
}

*/


/*
int fib(int a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
	    printf("%d,%d",(a-1),(a-2));
		return fib(a-1)+fib(a-2);
	}
}
*/
/*
------------------ FACTORIAL OF A NUMBER --------------
 
int fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else if(a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}

*/


/*

------------- CALL BY REFERENCE CONTINUATION ------------
void func(int *a,int *b)
{
	printf("Initial values are: A=%d and B=%d \n",*a,*b);
	*a=*a+*b;
	*b=*b-*a;
	printf("Now values are A=%d and B=%d",*a,*b);
}
 
*/

/*
---------------- TWO DIMENSIONAL ARRAY ---------------------
int i,j;
int arr[3][3]={{1,3,5},{2,4,6},{7,8,9}};
for(i=0;i<3;i++)
{
	printf("\n");
	for(j=0;j<3;j++)
	{
		printf("%d,",arr[i][j]);
	}
}
*/
/*
--------- DOUBLE POINTER ------------------

int a=10;
int *b,**bc;
b=&a;
bc=&b;
printf("\n%d",b);
printf("\n%d",*b);
printf("\n%d",bc);
printf("\n%d",**bc);
*/

/*

---------------- POINTER OPERATIONS --------------------


int a=10;
int *b,**c;
b=&a;
c=&b;
printf("First Value of b=%d ",b);
printf("\nFirst Address of b=%d",&b);
printf("\nFirst Ponter value of b=%d",*b);
printf("\nFirst Address of c=%d",&c);
printf("\nFirst value of c=%d",c);
printf("\nFirst pointer value of c=%d",**c);
printf("\n Address of a=%d ",&a);

a=20;
b=&a;
printf("\nSecond Value of b=%d ",b);
printf("\nSecond Address of b=%d",&b);
printf("\nSecond Pointer value of b=%d",*b);
printf("\nSecond  Address of c=%d",&c);
printf("\nSecond  value of c=%d",c);
printf("\nSecond  pointer value of c=%d",**c);
printf("Second Address of a=%d",&a);

*/

/*
-----------------MALLOC MEMORY ALLOCATION ------------------

int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    printf("\n%d",ptr);
    printf("\n%d",(ptr+1));
	if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr);
	
	*/
	
	/*
	-------------CALLOC MEMORY ALLOCATION--------------- 
	
	int n,i,*ptr,sum=0;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)calloc(n,sizeof(int));  //memory allocated using calloc    
    printf("\n%d",ptr);
    printf("\n%d",(ptr+1));
	if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");    
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
        sum+=*(ptr+i);    
    }    
    printf("Sum=%d",sum);    
    free(ptr); 
    printf("%d",ptr);
    
    
    */
//printf("Enter size of name");
//scanf("%d",&n);

/*
----------------- STRINGS --------------------

char ch[]="hello";
char s[2];
printf("%s",ch);
printf("\nEnter string");
gets(s);
//scanf("%[^\n]s",s);
printf("\nString is %s",s);
char *p;
p=ch;
printf("\n%s",p);
printf("\n%d",*p);
printf("\n %d",abs(12));

*/

/*

------------ ARRAY PASSING TO FUNCTION ---------------

void man(int b[])
{
	int j=0;
	for(j=0;j<7;j++)
	{
		printf("%d,",b[j]);

	}
}
*/

/*
----------------------------- Encrypt or Decrypt of String ----------------------

int i, x;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);
   int y=1;
   while(y==1){
   

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &x);

   switch(x)
   {
   case 1:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; 

      printf("\nEncrypted string: %s\n", str);
      break;

   case 2:
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] - 3; 

      printf("\nDecrypted string: %s\n", str);
      break;

   default:
      printf("\nError\n");
   }
   y--;
   printf("If you want to do again \n Press 1");
   scanf("%d",&y);
}


*/
int j;
size_t i;
printf("%d",sizeof(i));
printf("\n%d",3.14/2.1);
printf("\n%d",fmod(3.14,2.1));
printf("\n%d",3/4);
printf("\n%d",3%4);





return 110;
}

