#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


void decToBin()
{
	int arr[20];
	int i=0;float dec;
	cout<<"Enter Decimal no.: ";
	cin>>dec;

	while(dec>0)
	{
		int intPart=(int)dec;
		float decPart=dec-intPart;
		arr[i]=intPart%2;
		intPart=intPart/2;
		i++;
	}
	//while((decPart-(int)decPart)==0)
      //  decPart=decPart*2;
		//if()
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
	cout<<"Enter your choice"<<endl;
	cout<<"1: Decimal to binary "<<endl<<"2: binary to Decimal"<<endl;
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

