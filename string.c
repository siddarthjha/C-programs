#include <stdio.h>

int maxDiff(int arr[], int arr_size)
{
int max_diff=arr[1]-arr[0];
int i, j;
for (i = 0; i < arr_size; i++)
{
for (j = i+1; j < arr_size; j++)
{
if(arr[j]-arr[i]>max_diff)
{
max_diff=arr[j]-arr[i];
}
}
return max_diff;
}
}

/* Driver program to test above function */
int main()
{
int i=0,j=0;
//int arr[] = {1, 2, 90, 10, 110};
//printf("Maximum difference is -%d", maxDiff(arr, 5));
char ch[]={"Siddar thats"};
printf("\nThe string is\t %s",ch);
int n=sizeof(ch);
char ch1[n];
ch1[0]=ch[0];
char c;
int counter=0;
int k=1;
for(i=1;i<n;i++)
{
	counter=0;
	c=ch[i];
	for(j=0;ch1[j]!='\0';j++)
	{
		if(c==ch1[j])
		{
			counter=1;
			break;
		}
	}
	if(counter==0)
	{
		ch1[k++]=ch[i];
	}
}
printf("\nAfter modifications the string is \t%s",ch1);

return 0;
}
