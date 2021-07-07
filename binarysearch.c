#include<stdio.h>
#include<conio.h>
int main()
 {
     int a[20],i,val,n,beg,end,pos,mid;		        
   printf("enter limit of aray:");	        
    scanf("%d",&n);	
    printf("enter elements sorted aray:");	 
    for(i=1;i<=n;i++)	
 {	
     scanf("%d",&a[i]);
        	}	
    printf("\naRAY\n");	
    for(i=1;i<=n;i++)
    	{	
        printf("%d\t",a[i]);
        	}	
 printf("\n enter the element  search");	
    scanf("%d",&val);	
    beg=1;	end=n;	pos=-1;	
    while(beg<=end)	
        {	
        mid=(beg+end)/2;	
        if(a[mid]==val)	
            {
            	pos=mid;	
            printf("%d found at %d",val,pos);	break;	
           }
        else	
            {	
            if(a[mid]>val)	
            end=mid-1;
            	else	
            beg=mid+1;
        if(pos==-1)	
     }   
  printf("value is not present in the array");	
        getch();	
}



