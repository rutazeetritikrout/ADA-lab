#include<iostream>
#include<time.h>

using namespace std;

int linear(int arr[],int front,int key,int end)
{
	int found=-1;	
	for(int i=front;i<end;i++)
	{
		if(key==arr[i])
		{
			found=1;
			break;
		}
	}
	return found;
}		 

int binary(int arr[],int front,int key,int end)
{
	if(front>end)
	return -2;
	int mid=(front+end)/2;
	if(arr[mid]>key)
	return binary(arr,front,key,mid-1);
	else if(arr[mid]<key)
	return binary(arr,mid+1,key,end);
	else
	return mid;			
}

int main()
{
	int size;
	cout<<"enter the size    ";
	cin>>size;
	int *arr = new int[size];
	cout<<"enter the key   ";
	int key;
	cin>>key;
	for(int i=0;i<size;i++)
	{	
		cout<<"enter the element  ";
		cin>>arr[i];
	}	
	clock_t start, end;
	start=clock();
	cout<<"binary:"<<(1+binary(arr,0,key,(size-1)));
	end=clock();
	cout<<"the time taken for binary search"<<"\n"<<(end-start)<<endl;
	start=clock();
	cout<<"linear:"<<(1+linear(arr,0,key,(size-1)));
	end=clock();
	cout<<"the time taken for linear search"<<"\n"<<(end-start)<<endl;
	return 0;
}

