#include<iostream>
using namespace std;
int main()
{
	int n, a[n], i, j;
	cout<<"Nhap kich thuoc mang:";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
	for(i=0; i<n-1; i++)
	{
		int min=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i], a[min]);
	}
	cout<<"Mang sau khi duoc sap xep la:"<<endl;
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}
