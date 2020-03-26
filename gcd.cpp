#include<iostream>

using namespace std;

int euclid(int m, int n)
{
	int rem;
	while(n!=0)
	{
		rem = m%n;
		m = n;
		n = rem;
	}
	return m;
}

int rep(int m, int n)
{
	while(m!=n)
	{
		if(m>n)
			m = m-n;
		else
			n = n-m;
	}
	return n;
}

int consecutive(int m, int n)
{
	int small = m;
	if (n<small)
	{
		n=small;
	}
	while(n%small!=0 && m%small!=0)
	{
		small = small-1;
	}
	return small;
}

int mid_school(int m, int n)
{
    int large;
    large = m > n ? m : n;
    int a = 0, b = 0, result = 1;
    for(int i = 2; i <= large; i++)
    {
        a = 0;
        b = 0;
        if (m % i == 0)
        {
            a = 1;
            m = m / i;
        }
        if (n % i == 0)
        {
            b = 1;
            n = n / i;
        }
        if (a == 1 && b == 1)
            result*=i;
        if (a == 1 || b == 1)
            i--;
    }
    return result;
}
int main()
{
	cout<<"Enter the two numbers";
	int a,b;
	cin>>a>>b;
	cout<<euclid(a,b)<<endl;
	cout<<rep(a,b)<<endl;
	cout<<consecutive(a,b)<<endl;
	cout <<mid_school(a, b)<<endl;
	return 0;
}
