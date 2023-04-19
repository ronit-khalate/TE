#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>

clock_t str,end;

void main()
{
	int i,j;
	int no,k,pr,r[1000];
	double x,c;
	int x1,x2,xa,xb,ya,yb,k1,k2,ka,kb;
	clrscr();
	printf("\n Enter any prime no > 2: -");
	scanf("%d",&no);
	str=clock();
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			printf("no not prime");
			break;
		}
		else
		{
			printf("prime no");
			break;
		}
	}
	printf("\n Enter the primitive root of %d:- ",no);
	scanf("%d",&pr);

	for(k=1;k<no;k++)
	{




		if(k>3)
		{
		i=0;
		c=1;
		while(i<k)
		{
			if(k-i<4)
			{
				j=k-i;
				i=j;
			}
			else
			{
				j=4;
				i=i+4;
			}
			x=pow(pr,j);
			c=fmod(x,no)*c;
		}
		r[k]=fmod(c,no);
		}
		else
		{
			x=pow(pr,k);
			r[k]=fmod(x,no);
		}
		printf(" %d ",r[k]);
	}
	for(i=1;i<no;i++)
	{
		for(j=1;j<no;j++)
		{
			if(i!=j)
			{
				if(r[i]==r[j])
				{
					k=1;
					break;
				}
				else
				{
					k=2;

				}


			}
		}
	}
	if(k==1)
	{
		printf("\n not primitive root");
	}
	else
	if(k==2)
	{
		printf("\n primitive root");

		printf("\n Enter the private key for A:- ");
		scanf("%d",&xa);

		printf("\n Enter the private key for B:- ");
		scanf("%d",&xb);

		//for public key ya

		i=0;
		c=1;
		while(i<xa)
		{
			if(i+1==xa)
			{
				j=1;
				i++;
			}
			else
			{
				j=2;
				i=i+2;
			}
			x1=pow(pr,j);
			c=fmod((fmod(x1,no)*c),no);
		}
		ya=fmod(c,no);

	    //	x1=pow(pr,xa);
	    //	ya=x1%no;
		printf("\n Public key for A:- %d",ya);

		//for public key yb

		i=0;
		c=1;
		while(i<xb)
		{
			if(i+1==xb)
			{
				j=1;
				i++;
			}
			else
			{
				j=2;
				i=i+2;
			}
			x2=pow(pr,j);
			c=fmod((fmod(x2,no)*c),no);
		}
		yb=fmod(c,no);

	  //	x2=pow(pr,xb);
	  //	yb=x2%no;
		printf("\n Public key for B:- %d",yb);

		//for secret key ka

		i=0;
		c=1;
		while(i<xa)
		{
			if(i+1==xa)
			{
				j=1;
				i++;
			}
			else
			{
				j=2;
				i=i+2;
			}
			k1=pow(yb,j);
			c=fmod((fmod(k1,no)*c),no);
		}
		ka=fmod(c,no);

	  //	k1=pow(yb,xa);
	  //	ka=k1%no;
		printf("\n Secret key for A:- %d",ka);

		i=0;
		c=1;
		while(i<xb)
		{
			if(i+1==xb)
			{
				j=1;
				i++;
			}
			else
			{
				j=2;
				i=i+2;
			}
			k2=pow(ya,j);
			c=fmod((fmod(k2,no)*c),no);
		}
		kb=fmod(c,no);

	  //	k2=pow(ya,xb);
	  //	kb=k2%no;
		printf("\n Secret key for B:- %d",kb);

	}

	end=clock();
	printf("\n Time :- %d msec",end-str);

	getch();
}





				


















