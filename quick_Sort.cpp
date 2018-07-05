#include<iostream>
using namespace std;
void quickSort(int a[],int low,int high);
int partition(int a[],int low,int high);
void print(int [], int);
int main()
{
	int ar[7];
	cout<<"Enter elements of the array"<<endl;
	for(int i=0;i<7;i++)
	{
		cin>>ar[i];	
	}
	quickSort(ar,0,6);
	cout<<"Sorted array: "<<endl;
	print(ar,7);

	return 0;
		
}
int partition(int ar[],int low,int high)
{
	int pivot=ar[high];
	int i=(low-1);
	int t,temp;
	
	for(int j=low;j<high;j++)
	{
		if(ar[j]<=pivot)
		{
			i++;
			t=ar[i];
			ar[i]=ar[j];
			ar[j]=t;	
		}	
	}
	
	temp=ar[i+1];
	ar[i+1]=ar[high];
	ar[high]=temp;
	return (i+1); //pivot position
}
void quickSort(int ar[],int low,int high)
{
	int pivo;
	if(low<high)
	{
		pivo=partition(ar,low,high);
		quickSort(ar,low,pivo-1);
		quickSort(ar,pivo+1,high);

	}
}
void print(int ar[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<ar[i]<<endl;
	}
}
