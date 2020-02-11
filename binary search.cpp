#include<iostream>
using namespace std;
void binary(int n,int arr[],int key)
{
	
	int front = 0, end = n-1;
	int mid;
	int found = -1;
	while(front <= end)
	{
		mid = (front + end)/2;
		
		if(arr[mid]==key)
		{
			found = mid;
			break;
		}
		else if(arr[mid]<key)
		{
			front = mid+1;
		}
		else
			end  = mid -1;
	
	}
	
	if(found == -1)
	{
		cout<<"Element not found";
		return;
	}
	
	int posmin  = found;
	while(posmin >= front)
	{
		if(arr[posmin]!=key)
		{
			break;
		}	
		posmin--;
				
	}
	posmin++;
	
	int posmax = found;
	while(posmax<=end)
	{
		if(arr[posmax]!=key)
		{
			break;
		}
		posmax++;
		
		
	}
	posmax--;

	cout<<"The Key is found from postions: "<<++posmin<<" to position: "<<++posmax<<" \nTotal duplicates found : "<<(posmax-posmin+1);

}

int main()
{
	cout<<"Enter the size";
	int size;
	cin>>size;
	int arr[size];
	cout<<"Enter the array \n";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be searched: ";
	int key;
	cin>>key;
	binary(size,arr,key);
	return 0;
}
