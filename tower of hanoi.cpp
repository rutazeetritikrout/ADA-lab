#include<iostream>
using namespace std;

void hanoi(int n, char from, char to, char using1)
{
	if(n==1)
	{
		cout<<"Move disk 1 from from rod "<<from<<" to rod "<<to<<endl;
		return;
	}
	hanoi(n-1,from,using1,to);
	cout<<"Move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
	hanoi(n-1,using1,to,from);
}

int main()
{
	int n;
	cout<<"Enter the value of T: ";
	cin>>n;
	hanoi(n,'A','C','B');
	return 0;
}
