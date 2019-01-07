#include<iostream>
#include<math.h>

using namespace std;


void decToBin(int dec)
{
	int arr[3];
	int i=0;
	//int z=dec;
	
	while(dec>0)
	{   
		arr[i]=dec%2;
		dec=dec/2;
		i++;
	}
	
	while(i>-1)
	{
		cout<<arr[--i];
	}
	
}

void binToDec(int bin)
{
	int sum=0,i=0,bin2;
	bin2=bin;
	do
	{
		bin2=bin2/10;
	i++;
	}while(bin2>=0);
	
	do
	{
		sum=bin%10*pow(2,i);
		i--;
	}while(i>-1);
	//cout<<endl<<sum;	
}

int main()
{
	int x,y;
	cin>>x;
	decToBin(x);
	cin>>y;
	binToDec(y);
	
	return 0;
	
}

