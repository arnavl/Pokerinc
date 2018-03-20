#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int findrank(char z);
clock_t start,end;
double total;

//straight flush
int straightflush(char a[5][2])
{int flag=0, i=0;

//for black hand
	for(i=0; i<4; i++)
	{
		//printf("%c %c\n",a[i][1],a[i+1][1]);
		if(a[i][1]!=a[i+1][1])//not same suite
		{	
			flag=1;
			break;
		}
	}
	if(flag==0) //same suite
	{
		flag=0;
		for(i=0; i<4; i++)
		{
			if(findrank(a[i][0])!=findrank(a[i+1][0])-1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0) 
                          return 9;
                           
                else return 0;
	}
	else return 0;
}


int flush(char a[5][2])
{int flag=0, i=0;
for(i=0; i<4; i++)
	{	//printf("%c %c\n",a[i][1],a[i+1][1]);
		if(a[i][1]!=a[i+1][1])
		{	
			flag=1;
			break;
		}
	}
	if(flag==0) 
	{       return 6;
	}
	else return 0;

}

int straight(char a[5][2])
{int flag=0, i=0;
		for(i=0; i<4; i++)
		{
			if(findrank(a[i][0])!=findrank(a[i+1][0])-1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0){ printf("A:Straight \n"); 
                             return 5;
                           }
                else return 0;

}

int four_of_a_kind(char a[5][2])
{int flag=0,i=0;
		for(i=0; i<3; i++)
		{
			if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0){  
                             return 8;
                           }
                else 
                 { flag=0;
                   for(i=1; i<4; i++)
		     {
			if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		     }
		if(flag==0){ printf("A:four of a kind \n"); 
                             return 8;
                           }
                else return 0;
               }
         	
}

int three_of_a_kind(char a[5][2])
{ int flag=0, i=0;
               
		for(i=0; i<2; i++)
		{       if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0){ return 4;
                           }
                else 
                 { flag=0;
                   for(i=1; i<3; i++)
		     {  if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		     }
		if(flag==0){ printf("A:three of a kind \n"); 
                             return 4;
                           }
                else
                  {flag=0;
                   for(i=2; i<4; i++)
		     {  if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		     }
		if(flag==0){ printf("A:three of a kind \n"); 
                             return 4;
                           }
                else return 0;
                }
              }


}

int full_house(char a[5][2])
{int flag=0, i=0;
               
		for(i=0; i<2; i++)
		{       if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//first 3 are equal
                            { for(i=3;i<4;i++)
                                {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     { flag=1;
                                      break;
                                     }
                                }
                             if(flag==0)//last two are equal
                                {return 7;
                                }
                             else return 0;
                           }//end of if
               
                else//first 3 are not equal
                    {    flag=0;
                         for(i=0;i<1;i++)
                         {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     { flag=1;
                                       break;
                                     }
                         }
                         if(flag==0)//first two are equal
                             {for(i=2;i<4;i++)//checking if last 3 are equal
                                {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     {flag=1;
                                      break;
                                     }
                                }
                             if(flag==0)//last three are equal
                                {return 7;
                                }
                             else return 0;
                             }
                         else return 0;

                   }

}

int pair(char a[5][2])
{   int  flag=0, i=0;
               
		for(i=0; i<1; i++)
		{       if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//first 2 are equal
                            {return 2;
                            }
                else//first two are not equal
                  {flag=0;
                   for(i=1; i<2; i++)
		     {     if(findrank(a[i][0])!=findrank(a[i+1][0]))
			  {
				flag=1;
				break;
			  }
		      }
		   if(flag==0)//2nd and 3rd are equal
                            { return 2;
                            }
                   else//2nd and 3rd are not equal
                            {flag=0;
                             for(i=2; i<3; i++)
		             {     if(findrank(a[i][0])!=findrank(a[i+1][0]))
			            {
				     flag=1;
			 	     break;
			            }
		              }
		              if(flag==0)//3rd and 4th are equal
                                  {return 2;
                                  }
                              else//3rd and 4th are not equal
                                  {flag=0;
                                    for(i=3;i<4; i++)
		                     {     if(findrank(a[i][0])!=findrank(a[i+1][0]))
			                       {
				                flag=1;
			 	                break;
                                               }
                                           if(flag==0)//4th and 5th equal
                                               {return 2;
                                               }
                                           else return 0;
                                      }
                                    }
              return 0;       
        }}           

}


int two_pairs(char a[5][2])
{int flag=0, i=0;
               
		for(i=0; i<1; i++)
		{       if(findrank(a[i][0])!=findrank(a[i+1][0]))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)//first 2 are equal
                            {  flag=0;
                               for(i=2;i<3;i++)//checking if next two are equal
                                {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     { flag=1;
                                      break;
                                     }
                                }
                             if(flag==0)//next two are equal
                                {return 3;
                                }
                             else //next two are not equal
                                { flag=0;
                                  for(i=3;i<4;i++)//checking if last two are equal
                                  {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                    {flag=1;
                                      break;
                                    }
                                  }
                                 if(flag==0)//last two are equal
                                   {return 3;
                                   }
                                 else return 0;
                                }
                              }

                else//first 2 are not equal
                    {    flag=0;
                         for(i=1;i<2;i++)
                         {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     { flag=1;
                                       break;
                                     }
                         }
                         if(flag==0)//2nd and third are equal
                             {flag=0;
                              for(i=3;i<4;i++)//checking if last 2 are equal
                                {if(findrank(a[i][0])!=findrank(a[i+1][0]))
                                     {flag=1;
                                      break;
                                     }
                                }
                             if(flag==0)//last two are equal
                                {return 3;
                                }
                             else return 0;
                             }
                         else return 0;

                   }

}

void high_card(char a[5][2], char b[5][2])
{int i=0,flag=0;
for(i=4;i>=0;i--)
{if(findrank(a[i][0]) > findrank(b[i][0]))
  {printf("\n\nBLACK HAND WINS\n\n");
  flag=1;
  break;
  }
else if(findrank(a[i][0]) < findrank(b[i][0])) 
  { printf("\n\nWHITE HAND WINS\n\n");
  flag=1;  
  break;
  }
}
if(flag==0)
printf("\n\nIT'S A TIE\n\n");
}


int findrank(char z)
{
	switch(z){
		case 'A': return 14;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
        case 'T': return 10;
		case 'J': return 11;
		case 'Q': return 12;
		case 'K': return 13;

	         }
}


void main()
{
	FILE * fp= fopen("abc.txt","r");
	char a[5][2]={};
	char b[5][2]={};
	char tmp1,tmp2;
	int i=0;
int j,k,temp,p;

for(p=0;p<4;p++)
{int ranka=0,rankb=0;
	for (i=0; i<5; i++)
	{
		fscanf(fp,"%c",&a[i][0]);
		fscanf(fp,"%c",&a[i][1]);
		fscanf(fp,"%c",&tmp1);
		//printf("%c",a[i][0]);
		//printf("%c\n",a[i][1]);
	}
	for (i=0; i<5; i++)
	{
		fscanf(fp,"%c",&b[i][0]);
		fscanf(fp,"%c",&b[i][1]);
                fscanf(fp,"%c",&tmp2);
                //printf("%c",b[i][0]);
		//printf("%c\n",b[i][1]);
	}
	for(j=0; j<5; j++)
	{
		for(k=j; k<5; k++)
			{
				if(findrank(a[k][0])<findrank(a[j][0]))
				{
					temp=a[k][0];
					a[k][0]=a[j][0];
					a[j][0]=temp;
					temp=a[k][1];
					a[k][1]=a[j][1];
					a[j][1]=temp;
				}
			
			}
	}
	for(j=0; j<5; j++)
	{
		for(k=j; k<5; k++)
			{
				if(findrank(b[k][0])<findrank(b[j][0]))
				{
					temp=b[k][0];
					b[k][0]=b[j][0];
					b[j][0]=temp;
					temp=b[k][1];
					b[k][1]=b[j][1];
					b[j][1]=temp;
				}
			
			}
	}

start=clock();
ranka=straightflush(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\n\ntime taken for straight flush(black): %f sec",total);
if(ranka!=0)
goto Bpart;

start=clock();
ranka=four_of_a_kind(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for four of a kind(black): %f sec",total);
if(ranka!=0)
goto Bpart;

start=clock();
ranka=full_house(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for full house(black): %f sec",total);
if(ranka!=0)
goto Bpart;


start=clock();
ranka=flush(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for flush(black): %f sec",total);
if(ranka!=0)
goto Bpart;


start=clock();
ranka=straight(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for straight(black): %f sec",total);
if(ranka!=0)
goto Bpart;

start=clock();
ranka=three_of_a_kind(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for three of a kind(black): %f sec",total);
if(ranka!=0)
goto Bpart;

start=clock();
ranka=two_pairs(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for two pairs(black): %f sec",total);
if(ranka!=0)
goto Bpart;


start=clock();
ranka=pair(a);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for pair(black): %f sec",total);
if(ranka!=0)
goto Bpart;



Bpart: start=0,end=0;
start=clock();
rankb=straightflush(b);
end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\n\ntime taken for straight flush(white): %f sec",total);
     if(rankb!=0)
         goto Cpart;
        
      start=clock();
      rankb=four_of_a_kind(b);
      end=clock();
      total=(double)(end-start)/CLOCKS_PER_SEC;
      printf("\ntime taken for four of a kind (white): %f sec",total);
      if(rankb!=0)
         goto Cpart;
        
      start=clock();
      rankb=full_house(b);
      end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for full house(white): %f sec",total);
      if(rankb!=0)       
         goto Cpart;
        
      start=clock();
      rankb=flush(b);
      end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for flush(white): %f sec",total);
      if(rankb!=0)
         goto Cpart;
        
      start=clock();
      rankb=straight(b);
      end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for straight (white): %f sec",total);
      if(rankb!=0)
         goto Cpart;
        
     start=clock();
     rankb=three_of_a_kind(b);
     end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for three of a kind(white): %f sec",total);
     if(rankb!=0)
         goto Cpart;
        
     start=clock();
     rankb=two_pairs(b);
     end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for two pairs(white): %f sec",total);
     if(rankb!=0)
         goto Cpart;
        
      start=clock();
     rankb=pair(b);
     end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for pair(white): %f sec",total);
     if(rankb!=0)
         goto Cpart;        


Cpart:if (ranka > rankb)
      printf("\n\nBLACK HAND WINS\n\n");
      else if( ranka < rankb)
      printf("\n\nWHITE HAND WINS\n\n");
      else
      {start=clock();
       high_card(a,b);
       end=clock();
total=(double)(end-start)/CLOCKS_PER_SEC;
printf("\ntime taken for high card: %f sec",total);
}
}
}
