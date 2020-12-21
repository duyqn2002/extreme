#include<iostream>
using namespace std;
void check()
{
	int i,j,m,n,arr[100][100],min=9999,max=-9999,h,k;
	cout<<"Enter rows: ";
	cin>>m;
	cout<<"Enter columns: ";
	cin>>n;
	cout<<"Enter elements of the array: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>arr[i][j];
	}
	cout<<"Expressing matrix: "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cout<<arr[i][j];
		cout<<endl;
	}
	
	for(i=0;i<m;i++)
	{
		if(i!= 0 && i!= m-1)
		{
			for(j=0;j<n;j++)
			{
				if(j!= 0 && j!= n-1)
				{
					for (h= i-1;h<=i+1;h++)
	{
		
		
			for(k=j-1;k<=j+1;k++)
			{
				if(h!=i && k!=j)
				{
					if(arr[h][k]>=max)
					max=arr[h][k];
					if(arr[h][k]<=min)
					min = arr[h][k];
				};
			}
		
	};
					if(arr[i][j]>max || arr[i][j]<min)
					{
						cout<<arr[i][j]<<" is a extreme element."<<endl;
					}
				
				}
			}
		}
	}
}
int main()
{
	check();
	return 0;
}
