#include<iostream>

using namespace std;

void dToB(short int dec1,short int dec2)
{
   int arr1[20],arr2[20];unsigned short int comp1,comp2;
	int i=0,j=0;
	if(dec1>0&&dec2>0){
	while(dec1>0)
	{
		arr1[i]=dec1%2;
		dec1=dec1/2;
		i++;
	}
	while(dec2>0)
	{
		arr2[j]=dec2%2;
		dec2=dec2/2;
		j++;
	}
    }
    else
    {
		if(dec1<0&&dec2<0)
		{
		    comp1=~dec1+1;
			comp2=~dec2+1;

			while(comp1>0)
	         {
		      arr1[i]=comp1%2;
		      comp1=comp1/2;
		      i++;
	          }

	          while(comp2>0)
	           {
		       arr2[j]=comp2%2;
		       comp2=comp2/2;
		       j++;
	       }
		}
		else
		{
			if(dec1<0)
            {
				 comp1=~dec1+1;
				 while(comp1>0)
	              {
		           arr1[i]=comp1%2;
		           comp1=comp1/2;
		           i++;
	              }
	              while(dec2>0)
	               {
		            arr2[j]=dec2%2;
		            dec2=dec2/2;
                    j++;
			       }
      }			else
			    {
			     while(dec1>0)
	             {
		          arr1[i]=dec1%2;
		          dec1=dec1/2;
		          i++;
	              }
				 comp2=~dec2+1;
				 while(comp2>0)
	               {
		             arr2[j]=comp2%2;
		             comp2=comp2/2;
		             j++;
                    }
		   }

	    }

}
        while(i>-1)
	    {
			cout<<arr1[i];
			--i;
		}
		cout<<endl;
		while(j>-1)
	    {
			cout<<arr2[j];
			--j;
		}
}


//void booth()
//{

//}

int main()
{
	dToB(-10,-2);
	unsigned short int b=10;
	b=~b;
	cout<<"\n"<<b<<sizeof(short);
}
