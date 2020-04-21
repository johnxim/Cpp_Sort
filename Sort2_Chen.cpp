#include<iostream>
using namespace std;
void nhapmang(int a[], int n);
int main()
{
	int a[9999],n , i;
	
	cout<<"nhap kich thuoc mang: ";
	cin>>n;
	nhapmang(a, n);
/*	for(i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
*/	
	cout<<"In Mang:\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
	
	for(i=1; i<n; i++)
	{
		int x=a[i];
		int pos=i-1;
		while(pos>=0 && a[pos]>x)
		{
			a[pos+1] = a[pos];
			pos = pos-1;
		}
		a[pos+1]=x;
	}
	
	cout<<"\nMang khi sau khi duoc sap xep la:\n";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}

void nhapmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<": ";
		cin>>a[i];
	}
}
