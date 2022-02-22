#include<stdio.h>
#include<string.h>
int main()
{
//INGREDIENTS PIZZERIA OFFERS BASIL ,PINEAPPLE,TOMATOES,CHEESE,MUSHROOM,PEPPER ;)
int n,l,d,i=1,j,k,c=0,p,lenth=0,value;//VARIABLES DECLARED AND INTIALIZED SOME
char lk [10][10],dk[10][10],ar[10][10];//ARRAY TO GET NAMES OF INGREDIENT BY CUSTOMER
char cpt[100];//ARRAY TO CONCATENATE ALL THE  LIKED INGREDIENNTS
char cdt[100];//ARRAY TO CONCATENTAE ALL THE DISLIKED INGREDIENTS
char array[100][100];

printf(" How many Number of clients:");
scanf("%d",&n);
while(i<=n)
{
	printf("Number of likes of client %d\n",i);
	scanf("%d",&l);
	c=c+l;
	printf(" Name of liked ingredients for %d client if any ",i);
	for(k=0;k<l;k++)
	{
		scanf("%s",lk[k]);	
		strcat(cpt,lk[k]);
	}
	printf("Number of disliked ingredients for client %d\n",i);
	scanf("%d",&d);
	printf("Name of disliked ingredients for client %d if any",i);
	for(j=0;j<d;j++)
	{
		scanf("%s",dk[j]);
		strcat(cdt,dk[j]);
	}
	i++;
}
 


//lenth=sizeof(lk);
/*for(p=0;p<lenth;p++)
{
	strcpy(ar[p],lk[p]);
}*/
printf("%d",c);
printf("%s",cpt);
printf("%s",cdt);
/*for(i=0;i<lenth;i++)
{
	printf(" %s \n",lk[i]);
}*/
value=strcmp(cpt,cdt);
if(value==0)
{
	strcpy(array,cpt);
}

printf("the ingredients not to be on pizza %s %s",array,cdt);
return 0;
}
