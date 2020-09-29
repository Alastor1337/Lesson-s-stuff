#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	const int SIZE = 100001;
	int array[SIZE]{0};
	int n;
	int t;
	
	cin>>n;	
	
	for (int i = 0;i < n;i++)
	{
		cin>>t;
		array[t]++;
	}
	
	for (int i = 0;i<=n;i++)
	{
		for (int j = 0;j < array[i];j++)
		{
			cout<<i<<" ";
		}
	}
	
	return 0;
}

