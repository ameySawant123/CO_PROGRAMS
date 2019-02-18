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
    {
	int dec=0,oct=0,bin,base=1,rem=0;
	cout<<"Enter binary number"<<endl;
	cin>>bin;
	do
	{
		rem = bin % 10;
        dec = dec + rem * base;
        bin = bin / 10 ;
        base = base * 2;

	}while(bin>0);
	base=1;
	while(dec!=0)
	{

		rem = dec % 8;
        oct = oct + rem * base;
        dec = dec / 8 ;
        base = base * 10;
	}

	cout<<"Octal value is"<<endl<<oct<<endl;

}
}

void dToB()
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

void hToB()
{
    string bin="",num2="";
	int i=0,num,dec=0,dec2;string hxDec;
	cout<<"Enter Hexadecimal number"<<endl;
	cin>>hxDec;
	while(hxDec[i]!='\0')
	{
	    num=hxDec[i];
	    if(num>47&&num<58)
	    {
	      dec=num-48;
	      while(dec!=0)
	      {
	       num2=(dec%2)+48;
	      while(num2.length()!=5)
	      {
	         num2='0'+num2;
	      }
	       num2+="";
	      }
		   dec=dec/2;
		   bin+=num2;
        }

       switch(hxDec[i])
       {
          case 'A':bin+=" 1010 ";
          break;
          case 'B':bin+=" 1011 ";
          break;
          case 'C':bin+=" 1100 ";
          break;
          case 'D':bin+=" 1101 ";
          break;
          case 'E':bin+=" 1110 ";
          break;
          case 'F':bin+=" 1111 ";
       }
       i++;
	}


		cout<<bin;

	cout<<endl;
}

int main()
{
	int a;
	do{
	cout<<"Enter your choice"<<endl;
	cout<<"1: Binary to decimal "<<endl<<"2: Binary ro hexadecimal"<<endl<<"3: Binary ro Octal"<<endl
	<<"4: Decimal to Binary "<<endl<<"5: Hexadecimal to Binary "<<endl;
    cin>>a;
    switch(a)
    {
	case 1:bToD();
	break;
	case 2:bToH();
	break;
	case 3:bToO();
    break;
    case 4:dToB();
    break;
    case 5:hToB();
    }
    }while(a!=0);
	return 0;

}
