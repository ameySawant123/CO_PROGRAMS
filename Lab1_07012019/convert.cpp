#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


void decToBin()
{
	int arr[20];
	int i=0, dec;
	cout<<"Enter Decimal no.: ";
	cin>>dec;
	while(dec>0)
	{
		arr[i]=dec%2;
		dec=dec/2;
		cout<<dec;
		i++;
	}

	while(i>0)
	{
		cout<<arr[--i];
	}

}

void binToDec()
{
	int dec=0,i=0,num,arr2[10],base=1,rem=0;
	cout<<"Enter binary no. :";
	cin>>num;
	do
	{
		rem = num % 10;
        dec = dec + rem * base;
        num = num / 10 ;
        base = base * 2;

	}while(num>0);
	cout<<endl<<dec;
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

