#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


void decToBin()
{
	int arr[20];
	int i=0,dec;
	cin>>dec;
	
	//int z=dec;
	
	while(dec>0)
	{   
		arr[i]=dec%2;
		dec=dec/2;
		i++;
	}
	
	while(i>0)
	{
		cout<<arr[--i];
	}
	
}

void binToDec()
{
	int sum=0,i=0,bin,bin2,arr2[10];
	cin>>bin;
	bin2=bin;
	do
	{
		arr2[i]=bin2%10;
		i++;
		
	}while(bin2>=0);
	
	do
	{
		sum=sum+arr2[i]*pow(2,i);
		i--;
	}while(i>-1);
	cout<<endl<<sum;	
}

int main()
{
	int a;
	do{
		cin>>a;
    switch(a)
    {
	case 1:decToBin();
	break;
	case 2:binToDec();
    }
    }while(a!=0);
	return 0;
	
}

