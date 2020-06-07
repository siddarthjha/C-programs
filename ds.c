#include <stdio.h>

/*

-------------------- BINARY SEARCH ----------------

int bin(int ar[],int beg,int end,int val)
{
	int m;
	if(end>=beg)
	{
		m=(beg+end)/2;
		if(ar[m]==val)
		{
			return m+1;
		}
		else if(ar[m]<val)
		{
			return bin(ar,m+1,end,val);
			
		}
		else 
		{
			return bin(ar,beg,m-1,val);
		}
	}
}

*/


/*
------------------- HEAP SORT ---------------------
int temp;  
  
void heapify(int arr[], int size, int i)  
{  
int largest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < size && arr[left] >arr[largest])  
largest = left;  
  
if (right < size && arr[right] > arr[largest])  
largest = right;  
  
if (largest != i)  
{  
temp = arr[i];  
    arr[i]= arr[largest];   
    arr[largest] = temp;  
heapify(arr, size, largest);  
}  
}  
  
void heapSort(int arr[], int size)  
{  
int i;  
for (i = size / 2 - 1; i >= 0; i--)  
heapify(arr, size, i);  
for (i=size-1; i>=0; i--)  
{  
temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
heapify(arr, i, 0);  
}  
}  
  
*/
int main()
{
	/*
	
	---------------------- LINEAR SEARCH AND BINARY SEARCH CALLING ------------------------
	int s,i,e,x,l;
	printf("Enter array size");
	scanf("%d",&s);
	int a[s];
	printf("\nEnter elements:");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nTo search enter the element");
	scanf("%d",&e);
	for(i=0;i<s;i++)
	{
		if(a[i]==e)
		{
			printf("\nElement %d is at %d(Linear Search)",e,a[i]);
			x=0;
		}
		
	}
	if(x!=0)
	{
		printf("Element not found");
	}
    l=bin(a,0,4,e);
    if(l != -1)   
    {  
        printf("\nItem found at location %d(Binary Search)",l);  
    }  
    else  
    {  
        printf("Item not found");  
    } 
	
	*/
	
	/*
	------------------- HEAP SORT MAIN CALLING..... -----------------
	
	int arr[] = {1, 10, 2, 3, 4, 1, 2, 100,23, 2};  
int i;  
int size = sizeof(arr)/sizeof(arr[0]);  
  
heapSort(arr, size);  
  
printf("printing sorted elements\n");  
for (i=0; i<size; ++i)  
printf("%d\n",arr[i]);

  
*/	
int a=1/2;
printf("%d",a);
 return 0;
}

