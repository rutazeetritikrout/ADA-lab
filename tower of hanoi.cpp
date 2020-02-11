#include<iostream>
using namespace std;

void hanoi(int n, char from, char To, char auxilary)
{
	if(n==1)
	{
		cout<<"Move disk 1 from from rod "<<from<<" to rod "<<To<<endl;
		return;
	}
	hanoi(n-1,from, auxilary,To);
	cout<<"Move disk "<<n<<" from rod "<<from<<" to rod "<<To<<endl;
	hanoi(n-1, auxilary, To, from);
}

int main()
{
	int n;
	cout<<"Enter the value of T: ";
	cin>>n;
	hanoi(n,'A','T','C');
	return 0;
}
