#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int latest[50][50];
int count4=0,totalnu=0;
void shuffle(int[],int);
void display(int[],int);
void array_creation(int[],int);
int delete_dummy(int[],int,int);
void add_array(int[],int);
int main(void)
{
	char ch;
	char ans='y';
	int i,count_no_of_genres=0,j,n,max=0,r,count_in_latest=0,n1;
	int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0;
	int a[50],b[50],c[50],d[50],e[50],f[50],g[50],h[50],final[100];
	printf("create your playlist \n");
	printf("enter the different genre names that will be in your playlist \n");
	for(i=0;i<50;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
		d[i]=0;
		e[i]=0;
		f[i]=0;
		g[i]=0;
		h[i]=0;
	}
	while(ans=='y')
	{
		scanf("%c",&ch);
		getchar();
		count_no_of_genres=count_no_of_genres+1;
		if(ch=='a')
		{
			flag1=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			a[n];
			for(i=0;i<n;i++)
			{
				a[i]=1;
			}
		}
		if(ch=='b')
		{
			flag2=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			b[n];
			for(i=0;i<n;i++)
			{
				b[i]=2;
			}
		}
		if(ch=='c')
		{
			flag3=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			c[n];
			for(i=0;i<n;i++)
			{
				c[i]=3;
			}
		}
		if(ch=='d')
		{
			flag4=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			d[n];
			for(i=0;i<n;i++)
			{
				d[i]=4;
			}
		}
		if(ch=='e')
		{
			flag5=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			e[n];
			for(i=0;i<n;i++)
			{
				e[i]=5;
			}
		}
		if(ch=='f')
		{
			flag6=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			f[n];
			for(i=0;i<n;i++)
			{
				f[i]=6;
			}
		}
		if(ch=='g')
		{
			flag7=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			g[n];
			for(i=0;i<n;i++)
			{
				g[i]=7;
			}
		}
		if(ch=='h')
		{
			flag8=1;
			printf("enter the no. of songs \n");
			scanf("%d",&n);
			totalnu+=n;
			getchar();
			if(max<n)
				max=n;
			h[n];
			for(i=0;i<n;i++)
			{
				h[i]=8;
			}
		}
		printf("do u wanna add more? \n");
		ans=getchar();
		getchar();
	}
	if(flag1==1)
	{
		shuffle(a,max);
	    add_array(a,max);
	}
	if(flag2==1)
	{
		shuffle(b,max);
	    add_array(b,max);
	}
	if(flag3==1)
	{
		shuffle(c,max);
	    add_array(c,max);
	}
	if(flag4==1)
	{
		shuffle(d,max);
	    add_array(d,max);
	}
	if(flag5==1)
	{
		shuffle(e,max);
	    add_array(e,max);
	}
	if(flag6==1)
	{
		shuffle(f,max);
	    add_array(f,max);
	}

	if(flag7==1)
	{
		shuffle(g,max);
	    add_array(g,max);
	}
	if(flag8==1)
	{
		shuffle(h,max);
	    add_array(h,max);
	}
    for(i=0;i<count_no_of_genres;i++)
    {
    	for(j=0;j<max;j++)
    	{
    		printf("%d  ",latest[i][j]);
    		count_in_latest=count_in_latest+1;

    	}
    	printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
    int count=0;
    for(j=0;j<max;j++)
    {
    	for(i=0;i<count_no_of_genres;i++)
    	{   
    		if(latest[i][j]!=0)
    		{
    		 final[count]=latest[i][j];
    		 count++;
            }
    	}
    	array_creation(final,count);
    }
       /*int count2=0;
	   for(i=0;i<count;i++)
	   {
		 if(final[i]==0)
		 {
			int del_key=final[i];
			//n1=delete_dummy(final,count,del_key);
			count2=count2+1;
		 }
		}
		*/
    for(i=0;i<totalnu;i++)
	{
		printf("  %d  ",final[i]);
	}
	printf("\n");
    return(0);
}
void shuffle(int x[],int max)
{
	int i;
	srand ( time(NULL) );
	for (i = max-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }

}
void display(int x[],int max)
{
	int i;
	for(i=0;i<max;i++)
	{
		printf("  %d  ",x[i]);
	}
	printf("\n");
}
void array_creation(int final[],int count)
{
	int x[count];
	int i,n1,j;
	shuffle(final,count);
	int temp_count=count/2;
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(final[i]==final[j])
			{
				int temp=final[temp_count];
				final[temp_count]=final[i];
				final[i]=temp;
			}

		}
	}
	for(i=count-1;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(final[i]==final[j])
			{
				int temp=final[temp_count];
				final[temp_count]=final[i];
				final[i]=temp;
			}

		}
	}
}
int delete_dummy(int x[],int count,int del_key)
{
	int i,j;
   for (i=0; i<count; i++)
      if (x[i] == del_key)
         break;
 
   // If x found in array
   if (i < count)
   {
     // reduce size of array and move all
     // elements on space ahead
     count = count - 1;
     for (j=i; j<count; j++)
        x[j] = x[j+1];
   }
 
   return count;
}
void add_array(int x[],int n)
{
	int i=count4,j=0;
	for(j=0;j<n;j++)
	{
		latest[count4][j]=x[j];
	}
	count4=count4+1;

}
