#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>

using namespace std;


void decToBin()
{
	int arr[20];
	int i=0, dec;
	cout<<"Enter decimal number"<<endl;
	cin>>dec;
	while(dec>0)
	{
		arr[i]=dec%2;
		dec=dec/2;
		i++;
	}

   cout<<"Binary value is"<<endl;
	while(i>0)
	{

		cout<<arr[--i];
	}
	cout<<endl;

}

void binToDec()
{
	int dec=0,i=0,num,arr2[10],base=1,rem=0;
	cout<<"Enter binary number"<<endl;
	cin>>num;
	do
	{
		rem = num % 10;
        dec = dec + rem * base;
        num = num / 10 ;
        base = base * 2;

	}while(num>0);

	cout<<"Decimal value is"<<endl<<dec<<endl;
}

int main()
{
	int a;
	do{
	cout<<"Enter your choice"<<endl;
	cout<<"1Decimal to binary "<<endl<<"2binary to Decimal"<<endl;
    cin>>a;
    switch(a)
    {
	case 1:decToBin();
	break;
	case 2:binToDec();
    break;
	case 3:exit(0);
    }
    }while(a!=0);
	return 0;

}
