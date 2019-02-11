#include<iostream>
#include<string.h>

using namespace std;

void bToD();
void bToH();
void bToO();

void bToD()
{
	int dec=0,num,base=1,rem=0;
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

void bToH()
{
	int dec=0,base=1,rem=0;
	long int num;
	string a;
	cout<<"Enter binary number"<<endl;
	cin>>num;
	
	do
	{
		rem = num % 10;
        dec = dec + rem * base;
        num = num / 10 ;
        base = base * 2;

	}while(num>0);
	
	
	do
	{
		rem=dec%16;
		if(rem<10)
		{char b=(48+rem);
		  a=b+a;
		  //strcat(a,((char)(48+rem)));
	    }
		else
		{
			switch(rem)
			{
			case 10:a="A"+a;
			//strcat(a,'A');
			        break;
			case 11:a="B"+a;
			//strcat(a,'B');
			        break;
			case 12:a="C"+a;
			//strcat(a,'C');
			        break;
			case 13:a="D"+a;
			//strcat(a,'D');
			        break;
			case 14:a="E"+a;
			//strcat(a,'E');
			        break;
			case 15:a="F"+a;
			//strcat(a,'F');
			        break;
		   }
		}
		dec=dec/16;
		
		
	}while(dec>0);
	//for(i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
	//{
		cout<<a;
	//}
}
void bToO()
{
	
}

int main()
{
	int a;
	do{
	cout<<"Enter your choice"<<endl;
	cout<<"1: Binary to decimal "<<endl<<"2: Binary ro hexadecimal"<<endl;
    cin>>a;
    switch(a)
    {
	case 1:bToD();
	break;
	case 2:bToH();
    }
    }while(a!=0);
	return 0;

}
