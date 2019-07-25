#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<cmath>
#include <cstdlib>
#include <time.h>
 
time_t now, later;
 
void sleep(int delay)
{
 now=time(NULL);
 later=now+delay;
 while(now<=later)now=time(NULL);
}
/* WINBASEAPI VOID WINAPI Sleep(
  _In_  DWORD dwMilliseconds
);*/

void gotoxy(short x, short y) 
{
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void clrscr()
{   
    
    /*int h=0;
    label:
    	for(int j=0;j<=100;j++)
    	{
    		gotoxy(j,h);
    		printf(" ");
    	}
    	h++;
    	if(h<=38)
    	goto label;*/
    	system("cls");

   
}

void tic_mark(int n,int m)
{
	if(m==1)
	{
		gotoxy(82,5);
		if(n==1)
		printf("X");
		else
		printf("O");
		
	}
	
	if(m==2)
	{
		gotoxy(88,5);
		if(n==1)
		printf("X");
		else
		printf("O");
		
	}
 
    if(m==3)
	{
		gotoxy(94,5);
		if(n==1)
		printf("X");
		else
		printf("O");
		
	}
	
	if(m==4)
	{
		gotoxy(82,8);
		if(n==1)
		printf("X");
		else
		printf("O");
		
	}
	
	if(m==5)
	{
		gotoxy(88,8);
		if(n==1)
		printf("X");
		else
		printf("O");
		
	}

	if(m==6)
	{
		gotoxy(94,8);
		if(n==1)
		printf("X");
		else
		printf("O");
	}

	if(m==7)
	{
		gotoxy(82,11);
		if(n==1)
		printf("X");
		else
		printf("O");
	}

	if(m==8)
	{
		gotoxy(88,11);
		if(n==1)
		printf("X");
		else
		printf("O");
	}

	if(m==9)
	{
		gotoxy(94,11);
		if(n==1)
		printf("X");
		else
		printf("O");
	}

}

int l_search(int st[],int m)
{   
    
	for(int i=0;st[i]!='\0';i++)
	{
		if(st[i]==m)
		return 1;
	}
	return 0;
}

void draw_winline(int z)
{   
    float j;
    int i;
	if(z==1)
	{
		for(int i=79;i<=96;i++)
	    if((i!=82)&&(i!=88)&&(i!=94))
       	{
	       gotoxy(i,5);
	       printf("-");
	       Sleep(100);
        }
	} 
	
	if(z==2)
	{
		for(int i=3;i<=13;i++)
	    if((i!=5)&&(i!=8)&&(i!=11))
       	{
	       gotoxy(82,i);
	       printf("|");
	       Sleep(100);
        }
	}
	
	if(z==3)
	{      
	       gotoxy(78,3);
	       printf(".");
	       Sleep(100);
	       gotoxy(80,4);
	       printf(".");
	       Sleep(100);
	       gotoxy(84,6);
	       printf(".");
	       Sleep(100);
	       gotoxy(85,7);
	       printf(".");
	       Sleep(100);
	       gotoxy(90,9);
	       printf(".");
	       Sleep(100);
	       gotoxy(91,10);
	       printf(".");
	       Sleep(100);
	       gotoxy(96,12);
	       printf(".");
	       Sleep(100);
	       gotoxy(98,13);
	       printf(".");
	       Sleep(100);
	      
	}
        
	if(z==4)
	{
		for(int i=3;i<=13;i++)
	    if((i!=5)&&(i!=8)&&(i!=11))
       	{
	       gotoxy(88,i);
	       printf("|");
	       Sleep(100);
        }
	}
	
	if(z==5)
	{
		for(int i=3;i<=13;i++)
	    if((i!=5)&&(i!=8)&&(i!=11))
       	{
	       gotoxy(94,i);
	       printf("|");
	       Sleep(100);
        }
	}
	
	if(z==6)
	{
		   gotoxy(98,3);
	       printf(".");
	       Sleep(100);
	       gotoxy(96,4);
	       printf(".");
	       Sleep(100);
	       gotoxy(91,6);
	       printf(".");
	       Sleep(100);
	       gotoxy(90,7);
	       printf(".");
	       Sleep(100);
	       gotoxy(86,9);
	       printf(".");
	       Sleep(100);
	       gotoxy(83,10);
	       printf(".");
	       Sleep(100);
	       gotoxy(81,12);
	       printf(".");
	       Sleep(100);
	       gotoxy(78,13);
	       printf(".");
	       Sleep(100);
	    
	    
        
	}
	
	if(z==7)
	{
		for(int i=79;i<=96;i++)
	    if((i!=82)&&(i!=88)&&(i!=94))
       	{
	       gotoxy(i,8);
	       printf("-");
	       Sleep(100);
        }
	}
	
	if(z==8)
	{
		for(int i=79;i<=96;i++)
	    if((i!=82)&&(i!=88)&&(i!=94))
       	{
	       gotoxy(i,11);
	       printf("-");
	       Sleep(100);
        }
	}
	
}

int check_ifwon(int ar[])
{
	if((l_search(ar,1))==1)
	{
	
	  if((l_search(ar,2))==1)
	  {
	  
		if((l_search(ar,3))==1)
		return 1;
	  }
    } 
	  
	
	if((l_search(ar,1))==1)
	{
	
	  if((l_search(ar,4))==1)
	  {
	  
		if((l_search(ar,7))==1)
		return 2;
	  }
    } 
	
	if((l_search(ar,1))==1)
	{
	
	  if((l_search(ar,5))==1)
	  {
	  
		if((l_search(ar,9))==1)
		return 3;
	  }
    } 

	if((l_search(ar,2))==1)
	{
	
	  if((l_search(ar,5))==1)
	  {
	  
		if((l_search(ar,8))==1)
		return 4;
	  }
    } 

	if((l_search(ar,3))==1)
	{
	
	  if((l_search(ar,6))==1)
	  {
	  
		if((l_search(ar,9))==1)
		return 5;
	  }
    } 

	if((l_search(ar,3))==1)
	{
	
	  if((l_search(ar,5))==1)
	  {
	  
		if((l_search(ar,7))==1)
		return 6;
	  }
    } 

	if((l_search(ar,4))==1)
	{
	
	  if((l_search(ar,5))==1)
	  {
	  
		if((l_search(ar,6))==1)
		return 7;
	  }
    } 
	
	if((l_search(ar,7))==1)
	{
	
	  if((l_search(ar,8))==1)
	  {
	  
		if((l_search(ar,9))==1)
		return 8;
	  }
    } 
	
	return 0;

}

int check_repeat(int a,int ar[],int str[])
{
	for(int i=0;ar[i]!='\0';i++)
	{
		if(a==ar[i])
		return -1;
	}
	
	for(int j=0;str[j]!='\0';j++)
	{
		if(a==str[j])
		return -1;
	}
    
	return 0; 
}

int choice_calc(int ar[],int str[])
{     
      int choice;
      
      
      
      if(l_search(str,1)==1)
      {
         if(l_search(str,2)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      } 
      
      if(l_search(str,2)==1)
      {
         if(l_search(str,3)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(str,3)==1)
      {
         if(l_search(str,1)==1)
         {
              if((l_search(ar,2)==0)&&(l_search(str,2)==0))
              return 2;
         }
      }                    
      
      if(l_search(str,1)==1)
      {
         if(l_search(str,4)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(str,4)==1)
      {
         if(l_search(str,7)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(str,7)==1)
      {
         if(l_search(str,1)==1)
         {
              if((l_search(ar,4)==0)&&(l_search(str,4)==0))
              return 4;
         }
      }                    
      
      if(l_search(str,1)==1)
      {
         if(l_search(str,5)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(str,5)==1)
      {
         if(l_search(str,9)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(str,9)==1)
      {
         if(l_search(str,1)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(str,2)==1)
      {
         if(l_search(str,5)==1)
         {
              if((l_search(ar,8)==0)&&(l_search(str,8)==0))
              return 8;
         }
      }                    
      
      if(l_search(str,5)==1)
      {
         if(l_search(str,8)==1)
         {
              if((l_search(ar,2)==0)&&(l_search(str,2)==0))
              return 2;
         }
      }                    
      
      if(l_search(str,8)==1)
      {
         if(l_search(str,2)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(str,3)==1)
      {
         if(l_search(str,6)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(str,6)==1)
      {
         if(l_search(str,9)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      }                    
      
      if(l_search(str,9)==1)
      {
         if(l_search(str,3)==1)
         {
              if((l_search(ar,6)==0)&&(l_search(str,6)==0))
              return 6;
         }
      }                    
      
      if(l_search(str,4)==1)
      {
         if(l_search(str,5)==1)
         {
              if((l_search(ar,6)==0)&&(l_search(str,6)==0))
              return 6;
         }
      }                    
      
      if(l_search(str,5)==1)
      {
         if(l_search(str,6)==1)
         {
              if((l_search(ar,4)==0)&&(l_search(str,4)==0))
              return 4;
         }
      }                    
      
      if(l_search(str,6)==1)
      {
         if(l_search(str,4)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(str,7)==1)
      {
         if(l_search(str,8)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(str,8)==1)
      {
         if(l_search(str,9)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(str,9)==1)
      {
         if(l_search(str,7)==1)
         {
              if((l_search(ar,8)==0)&&(l_search(str,8)==0))
              return 8;
         }
      }                    
      
      if(l_search(str,3)==1)
      {
         if(l_search(str,5)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(str,5)==1)
      {
         if(l_search(str,7)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      }                    
      
      if(l_search(str,7)==1)
      {
         if(l_search(str,3)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }
      
      
      
      
      if(l_search(ar,1)==1)
      {
         if(l_search(ar,2)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      } 
      
      if(l_search(ar,2)==1)
      {
         if(l_search(ar,3)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(ar,3)==1)
      {
         if(l_search(ar,1)==1)
         {
              if((l_search(ar,2)==0)&&(l_search(str,2)==0))
              return 2;
         }
      }                    
      
      if(l_search(ar,1)==1)
      {
         if(l_search(ar,4)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(ar,4)==1)
      {
         if(l_search(ar,7)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(ar,7)==1)
      {
         if(l_search(ar,1)==1)
         {
              if((l_search(ar,4)==0)&&(l_search(str,4)==0))
              return 4;
         }
      }                    
      
      if(l_search(ar,1)==1)
      {
         if(l_search(ar,5)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(ar,5)==1)
      {
         if(l_search(ar,9)==1)
         {
              if((l_search(ar,1)==0)&&(l_search(str,1)==0))
              return 1;
         }
      }                    
      
      if(l_search(ar,9)==1)
      {
         if(l_search(ar,1)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(ar,2)==1)
      {
         if(l_search(ar,5)==1)
         {
              if((l_search(ar,8)==0)&&(l_search(str,8)==0))
              return 8;
         }
      }                    
      
      if(l_search(ar,5)==1)
      {
         if(l_search(ar,8)==1)
         {
              if((l_search(ar,2)==0)&&(l_search(str,2)==0))
              return 2;
         }
      }                    
      
      if(l_search(ar,8)==1)
      {
         if(l_search(ar,2)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(ar,3)==1)
      {
         if(l_search(ar,6)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(ar,6)==1)
      {
         if(l_search(ar,9)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      }                    
      
      if(l_search(ar,9)==1)
      {
         if(l_search(ar,3)==1)
         {
              if((l_search(ar,6)==0)&&(l_search(str,6)==0))
              return 6;
         }
      }                    
      
      if(l_search(ar,4)==1)
      {
         if(l_search(ar,5)==1)
         {
              if((l_search(ar,6)==0)&&(l_search(str,6)==0))
              return 6;
         }
      }                    
      
      if(l_search(ar,5)==1)
      {
         if(l_search(ar,6)==1)
         {
              if((l_search(ar,4)==0)&&(l_search(str,4)==0))
              return 4;
         }
      }                    
      
      if(l_search(ar,6)==1)
      {
         if(l_search(ar,4)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }                    
      
      if(l_search(ar,7)==1)
      {
         if(l_search(ar,8)==1)
         {
              if((l_search(ar,9)==0)&&(l_search(str,9)==0))
              return 9;
         }
      }                    
      
      if(l_search(ar,8)==1)
      {
         if(l_search(ar,9)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(ar,9)==1)
      {
         if(l_search(ar,7)==1)
         {
              if((l_search(ar,8)==0)&&(l_search(str,8)==0))
              return 8;
         }
      }                    
      
      if(l_search(ar,3)==1)
      {
         if(l_search(ar,5)==1)
         {
              if((l_search(ar,7)==0)&&(l_search(str,7)==0))
              return 7;
         }
      }                    
      
      if(l_search(ar,5)==1)
      {
         if(l_search(ar,7)==1)
         {
              if((l_search(ar,3)==0)&&(l_search(str,3)==0))
              return 3;
         }
      }                    
      
      if(l_search(ar,7)==1)
      {
         if(l_search(ar,3)==1)
         {
              if((l_search(ar,5)==0)&&(l_search(str,5)==0))
              return 5;
         }
      }
      
      if((l_search(ar,1)==1)&&(l_search(ar,9)==1))
      {
            gam1:
            srand(time(0));
            choice = rand(); 
            if((choice%10)!=0&&(choice%10)!=3&&(choice%10)!=7)
            return (choice%10);
            else
            goto gam1;
      } 
      
      if((l_search(ar,3)==1)&&(l_search(ar,7)==1))
      {
            gam2:
            srand(time(0));
            choice = rand(); 
            if((choice%10)!=0&&(choice%10)!=1&&(choice%10)!=9)
            return (choice%10);
            else
            goto gam2;
      } 
      
      
      if(((l_search(str,5)==1)&&(l_search(str,7)==1))||((l_search(str,5)==1)&&(l_search(str,3)==1)))
      {
            gam5:
            srand(time(0));
            choice = rand(); 
            if(((choice%10)!=1)&&((choice%10)!=9))
            goto gam5;
            else if((choice%10)==0)
            goto gam5;
            else
            return (choice%10);
      }                                           
      
      if(((l_search(str,5)==1)&&(l_search(str,9)==1))||((l_search(str,5)==1)&&(l_search(str,1)==1)))
      {
            gam6:
            srand(time(0));
            choice = rand(); 
            if(((choice%10)!=3)&&((choice%10)!=7))
            goto gam6;
            else if((choice%10)==0)
            goto gam6;
            else
            return (choice%10);
      }                                            
        
      
      if(((l_search(ar,5)==1)&&(l_search(ar,7)==1))||((l_search(ar,5)==1)&&(l_search(ar,3)==1)))
      {
            gam3:
            srand(time(0));
            choice = rand(); 
            if(((l_search(ar,1)==0))&&((l_search(ar,9)==0))&&((l_search(str,1)==0))&&((l_search(str,9)==0)))
            {
              if(((choice%10)!=1)&&((choice%10)!=9))
              goto gam3;
              else if((choice%10)==0)
              goto gam3;
              else
              return (choice%10);
            } 
      }                                           
      
      if(((l_search(ar,5)==1)&&(l_search(ar,9)==1))||((l_search(ar,5)==1)&&(l_search(ar,1)==1)))
      {
            gam4:
            srand(time(0));
            choice = rand();
            if(((l_search(ar,3)==0))&&((l_search(ar,7)==0))&&((l_search(str,3)==0))&&((l_search(str,7)==0)))
            { 
              if(((choice%10)!=3)&&((choice%10)!=7))
              goto gam4;
              else if((choice%10)==0)
              goto gam4;
              else
              return (choice%10);
            } 
      }                                            
      
      again:
      srand(time(0));
      choice = rand(); 
      if((choice%10)!=0)
      return (choice%10);
      else
      goto again;                    
      
}

int main()
{   
    main:
    FILE *f1,*f2,*f3,*f4,*f5;
    char c,name1[30],name2[30],name3[30];
    int d,q,m,player1[9],player2[9],cpu_player[9],cpu[9],x,cc;
    for(int k=0;k<9;k++)
    {
            cpu_player[k]=0;
            cpu[k]=0;
    }       
    gotoxy(0,0);
	printf("=============================================================================================================================================================================================");
	printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
	printf("=============================================================================================================================================================================================");
	gotoxy(43,7);
	f1=fopen("Main menu.txt","r");
	while((c=getc(f1))!=EOF)
	printf("%c",c);
	fclose(f1);
    gotoxy(44,15);
    printf("1)PLAY");
    gotoxy(44,17);
    printf("2)HELP");
    gotoxy(44,19);
    printf("3)CREDITS");
    gotoxy(44,21);
    printf("4)EXIT");
    gotoxy(38,23);
    printf("Enter your choice [1-4]: ");
    start:
    scanf("%d",&d);
    int sum1,sum2,k,l,v=-1,w,o,sum3,sum4;
    switch(d)
    {
    	case 1: pl_start:
                clrscr();
    	        gotoxy(0,0);
		        printf("=============================================================================================================================================================================================");
				printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
				printf("=============================================================================================================================================================================================");
	            gotoxy(40,5);
	            f4=fopen("pl_opt.txt","r");
	            while((c=getc(f4))!=EOF)
	            printf("%c",c);
	            fclose(f4);
		        gotoxy(38,15);
                printf("9).PLAYER Vs. CPU");
                gotoxy(38,17);
                printf("99).PLAYER Vs. PLAYER");
                gotoxy(38,19);
                printf("999).BACK TO MAIN MENU");
                gotoxy(38,21);
                printf("Enter your choice : ");
                pl_opt:
                scanf("%d",&q);
                if(q==9)
                {     
                      
                      clrscr();
                      gotoxy(0,0);
                      printf("=============================================================================================================================================================================================");
					  printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
					  printf("=============================================================================================================================================================================================");
                      gotoxy(0,5);
                      printf("\n\t\t\t\t\tEnter your name: ");
                      scanf("%s",&name3);
                      st_ag:
                      printf("\n\n\t\t\t\t\t1).Let me play first.\n\n\t\t\t\t\t2).Let CPU play first.\n\n\t\t\t\t\tEnter your choice: ");
                      iplg:
                      scanf("%d",&x);
                      gotoxy(75,3);
                      f2=fopen("tic1.txt","r");
                      while((c=getc(f2))!=EOF)
                      printf("%c",c);
                      fclose(f2);
                      gotoxy(0,12);
                      printf("\t\t\t\t\t    GET READY!");
                      getchar();
                      sum3=12;sum4=13,v=-1;
                      if(x==1)
                      {   
                         gotoxy(0,5);
                         printf("\t\t\t\t    CPU : O and %s : X",name3);     
                         for(int i=0;i<9;i++)
                         { 
                        
                           gotoxy(0,sum3=sum3+2);
                      	
						   printf("\t\t\t\t%s, Enter your choice no.: ",name3);
						   label3:
    	                   scanf("%d",&m);
    	                   if((m!=1)&&(m!=2)&&(m!=3)&&(m!=4)&&(m!=5)&&(m!=6)&&(m!=7)&&(m!=8)&&(m!=9))
   	                       {
                                   printf("\n\t\t\t\tPlease enter a number in between 1-9: ");
                                   goto label3;
                           }          
                      	   o=check_repeat(m,cpu_player,cpu);
                      	   if(o==-1)
                      	   {
                      		  printf("\n\t\t\t\tThis place is already filled, enter your choice again: ");
                      		  goto label3;
                   	       }
                      	   cpu_player[i]=m;
                      	   tic_mark(1,m);
                      	   if(i>=2)
                      	   {
                      	     k=check_ifwon(cpu_player);
                      	     if(k!=0)
                      	     {
                      	          draw_winline(k);
                      	          gotoxy(40,sum3+4);
                	              printf("YOU WON THE MATCH!!!!");
                      	          v=0;
                 	              break;
                             }
                           } 
						   if(i==4)
						   break;
						   gotoxy(0,sum4=sum4+2);
						   printf("\t\t\t\tPlease Wait...");
                           sum4=sum4-2;                  	
                           gotoxy(0,sum4=sum4+2);
                           label4:
                           if(i==0)
                           {
                                   if((m==1)||(m==3)||(m==7)||(m==9))
                                   cc=5;
                                   else if(m==5)
                                   {    
                                        grand:
                                        srand(time(0));
                                        cc=(rand())%10;
                                        if((cc!=1)&&(cc!=3)&&(cc!=7)&&(cc!=9))
                                        goto grand;
                                        if(cc==0)
                                        goto grand;
                                               
                                   }    
                           }
                           else              
                           cc=choice_calc(cpu_player,cpu);
                           o=check_repeat(cc,cpu_player,cpu);
                      	   if(o==-1)
                           goto label4;
                   	       printf("\t\t\t\tCPU's choice no.: %d",cc);
                      	   cpu[i]=cc;
                      	   tic_mark(2,cc);
                      	   if(i>=2)
                      	   {
                      	      k=check_ifwon(cpu);
                      	      if(k!=0)
                      	      {
                      	          draw_winline(k);
                      	          gotoxy(40,sum4=sum4+4);
                      	          printf("CPU WON THE MATCH!!!!");
                      	          v=0;
          	                      break;
                              }
                           }  
                         }
                        
                        gotoxy(40,25);  
                        if(v!=0)
                        printf("DRAW MATCH!!!");
                        getchar();
                        printf("\n\n\n\n\t\t\t\t\t1) Play again.\n\n\t\t\t\t\t2) Back to player option.\n\n\n\t\t\t\t\tEnter your choice: ");
                        xyz:
                        scanf("%d",&w);
                        if(w==1)
                        {  
                          for(int i=0;i<=8;i++)
                          {
                                 cpu_player[i]=0;
                                 cpu[i]=0;
                          }
                          clrscr();
                          gotoxy(0,0);
                          printf("=============================================================================================================================================================================================");
						  printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
						  printf("=============================================================================================================================================================================================");
                          gotoxy(0,8);             
                          goto st_ag;
                        }  
                        else if(w==2)
                        {  
                           for(int i=0;i<=8;i++)
                          {
                                 cpu_player[i]=0;
                                 cpu[i]=0;
                          }              
                         goto pl_start;
                        }
                      
                        else
                        {
                           printf("\n\t\t\t\t\tWrong choice!!! Enter your choice again: ");
                           goto xyz;
                        }       
                              
                  }
                  
                  
                  else if(x==2)
                      {  
                         gotoxy(0,0);      
                         printf("=============================================================================================================================================================================================");
						 printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
						 printf("=============================================================================================================================================================================================");      
                         gotoxy(0,5);
                         printf("\t\t\t\t    CPU : X and %s : O",name3);      
                         for(int i=0;i<9;i++)
                         { 
                           gotoxy(0,sum3=sum3+2);
                           printf("\t\t\t\tPlease Wait....");
                           sum3=sum3-2;      
                           label5:
                           cc=choice_calc(cpu_player,cpu);
                      	   o=check_repeat(cc,cpu_player,cpu);
                      	   if(o==-1)
                      	   goto label5;
                      	   gotoxy(0,sum3=sum3+2);
                   	       printf("\t\t\t\tCPU's choice no.: %d",cc);
                   	       if(i==0)
                   	       {
                                gotoxy(51,sum3);
                                printf("         ");
                           }       
                      	   cpu[i]=cc;
                      	   tic_mark(1,cc);
                      	   if(i>=2)
                      	   {
                      	     k=check_ifwon(cpu);
                      	     if(k!=0)
                      	     {
                      	          draw_winline(k);
                      	          gotoxy(40,sum3+4);
                	              printf("CPU WON THE MATCH!!!!");
                      	          v=0;
              	                  break;
                             }
                           } 
						   if(i==4)
						   break;                  	
                           gotoxy(0,sum4=sum4+2);
                           printf("\t\t\t\t%s, Enter your choice no.: ",name3);
						   label6:
    	                   scanf("%d",&m);
    	                   if((m!=1)&&(m!=2)&&(m!=3)&&(m!=4)&&(m!=5)&&(m!=6)&&(m!=7)&&(m!=8)&&(m!=9))
   	                       {
                                   printf("\n\t\t\t\tPlease enter a number in between 1-9: ");
                                   goto label6;
                           }         

                      	   o=check_repeat(m,cpu_player,cpu);
                      	   if(o==-1)
                      	   {
                      		  printf("\n\t\t\t\tThis place is already filled, enter your choice again: ");
                      		  goto label6;
                   	       }
                      	   cpu_player[i]=m;
                      	   tic_mark(2,m);
                      	   if(i>=2)
                      	   {
                      	     k=check_ifwon(cpu_player);
                      	     if(k!=0)
                      	     {
                      	          draw_winline(k);
                      	          gotoxy(40,sum4+4);
                	              printf("YOU WON THE MATCH!!!!");
                      	          v=0;
                    	          break;
                             }
                           } 
                         }
                        
                        gotoxy(40,25);  
                        if(v!=0)
                        printf("DRAW MATCH!!!");
                        getchar();
                        printf("\n\n\n\n\t\t\t\t\t1) Play again.\n\n\t\t\t\t\t2) Back to player option.\n\n\n\t\t\t\t\tEnter your choice: ");
                        xyzm:
                        scanf("%d",&w);
                        if(w==1)
                        {  
                          for(int i=0;i<=8;i++)
                          {
                                 cpu_player[i]=0;
                                 cpu[i]=0;
                          }
                          clrscr();
                          gotoxy(0,0);
                          printf("=============================================================================================================================================================================================");
						  printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
						  printf("=============================================================================================================================================================================================");
                          gotoxy(0,8);             
                          goto st_ag;
                        }  
                        else if(w==2)
                        {  
                           for(int i=0;i<=8;i++)
                          {
                                 cpu_player[i]=0;
                                 cpu[i]=0;
                          }              
                         goto pl_start;
                        }
                      
                        else
                        {
                           printf("\n\t\t\t\t\tWrong choice!!! Enter your choice again: ");
                           goto xyzm;
                        }       
                              
                  }
                  
                  else
                  {
                      printf("\n\t\t\t\tWrong choice!!!Enter your choice again: ");
                      goto iplg;
                  }
                  
              }
                  
                  else if(q==99)
                  {     
                      player:
                      clrscr();
                      gotoxy(0,0);
                      printf("=============================================================================================================================================================================================");
	                  printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
					  printf("=============================================================================================================================================================================================");
                      gotoxy(0,5);
		   		      printf("\n\t\t\t\tEnter player1 name: ");
                      scanf("%s",&name1);
                      printf("\n\t\t\t\tEnter player2 name: ");
                      scanf("%s",&name2);
                      gotoxy(75,3);
                      f2=fopen("tic1.txt","r");
                      while((c=getc(f2))!=EOF)
                      printf("%c",c);
                      fclose(f2);
                      gotoxy(0,5);
                      printf("\t\t\t\t    %s : X and %s : O",name1,name2);
                      gotoxy(0,9);
                      printf("\n\t\t\t\t\t    GET READY!");
                      sum1=10;sum2=11;
                      for(int i=0;i<9;i++)
                      { 
                        
                        gotoxy(0,sum1=sum1+2);
                      	
						printf("\t\t\t\t%s, Enter your choice no.: ",name1);
						label2:
                      	scanf("%d",&m);
                        if((m!=1)&&(m!=2)&&(m!=3)&&(m!=4)&&(m!=5)&&(m!=6)&&(m!=7)&&(m!=8)&&(m!=9))
   	                    {
                                   printf("\n\t\t\t\tPlease enter a number in between 1-9: ");
                                   goto label2;
                        }        

                      	o=check_repeat(m,player1,player2);
                      	if(o==-1)
                      	{
                      		printf("\n\t\t\t\tThis place is already filled, enter your choice again: ");
                      		goto label2;
                      	}
                      	player1[i]=m;
                      	tic_mark(1,m);
                      	if(i>=2)
                      	{
                      	 k=check_ifwon(player1);
                      	 if(k!=0)
                      	 {
                      	   draw_winline(k);
                      	   gotoxy(40,sum1+4);
                      	   printf("%s WON THE MATCH!!!!",name1);
                      	   v=0;
                    	   break;
                         }
                        } 
						if(i==4)
						break;                  	
                        gotoxy(0,sum2=sum2+2);
                      	
						printf("\t\t\t\t%s, Enter your choice no.: ",name2);
						label1:
                      	scanf("%d",&m);
                      	if((m!=1)&&(m!=2)&&(m!=3)&&(m!=4)&&(m!=5)&&(m!=6)&&(m!=7)&&(m!=8)&&(m!=9))
   	                    {
                                   printf("\n\t\t\t\tPlease enter a number in between 1-9: ");
                                   goto label1;
                        }        
                      	o=check_repeat(m,player1,player2);
                      	if(o==-1)
                      	{
                           printf("\n\t\t\t\tThis place is already filled, enter your choice again: ");
						   goto label1;
						}
                      	player2[i]=m;
                      	tic_mark(2,m);
                      	if(i>=2)
                      	{
                      	 k=check_ifwon(player2);
                      	 if(k!=0)
                      	 {
                      	   draw_winline(k);
                      	   gotoxy(40,sum2=sum2+4);
                      	   printf("%s WON THE MATCH!!!!",name2);
                      	   v=0;
                      	   break;
                         }
                        } 
                     }
                      gotoxy(40,25);  
                      if(v!=0)
                      printf("DRAW MATCH!!!");
                      getchar(); 
                      printf("\n\n\n\n\t\t\t\t\t1) Play again.\n\n\t\t\t\t\t2) Back to player option.\n\n\n\t\t\t\t\tEnter your choice: ");
                      xyza:
                      scanf("%d",&w);
                      if(w==1)
                      {  
                         for(int i=0;i<=8;i++)
                         {
                                 player1[i]=0;
                                 player2[i]=0;
                         }             
                         goto player;
                      }  
                      else if(w==2)
                      {  
                          for(int i=0;i<=8;i++)
                         {
                                 player1[i]=0;
                                 player2[i]=0;
                         }              
                         goto pl_start;
                      }
                      
                      else
                      {
                          printf("\n\t\t\t\tWrong choice!!! Enter your choice again: ");
                          goto xyza;
                      }      
                                       
                }
                
                else if(q==999)
                {  
                   clrscr();  
                   goto main;
                }                        
                else
                {
                     printf("\n\t\t\t\tWRONG CHOICE!!! Enter again: ");  
				     goto pl_opt;    
                     getchar();
                }    
                
        case 2:  clrscr();                
                 gotoxy(0,0);
		         printf("=============================================================================================================================================================================================");
				 printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
				 printf("=============================================================================================================================================================================================");
	             gotoxy(43,5);
                 f3=fopen("HELP.txt","r");
                 while((c=getc(f3))!=EOF)
                 printf("%c",c);
                 fclose(f3);
                 
                 printf("\n\n1).In the Player option select mode, i.e Player vs. Player OR Player vs. CPU.\n\n2).In Player vs. Player mode, player 1 always begins the game.");
                 printf("\n\n3).The game consists of 3 X 3 matrix, each unit numbered from 1-9 as shown.\n");
                 f2=fopen("tic.txt","r");
                 while((c=getc(f2))!=EOF)
                 printf("%c",c);
                 fclose(f2);
                 printf("\n\n4).Each player is required to mark a unit with a perticular mark.\n\n5).Each player plays his/her turn alternatively.");
                 printf("\n\n6).The first one to complete a straight chain consisting of 3 marks either horizontally,vertically\n\nor diagonally wins the match, otherwise game is considered DRAW.\n\n7).When prompted to enter your name, please dont give spaces ( write only your initial ), otherwise\n\ngame might crash unexpectedly.\n\n8).Sometimes computer may take several seconds to make its move, please keep patience meanwhile.");
                 printf("\n\n\n\t\t\t\tPress Enter to return to Main Menu.");
                 getchar();
                 getchar();
                 clrscr();
                 goto main;    
        
        case 3:  clrscr();
    	         gotoxy(0,0);
		         printf("=============================================================================================================================================================================================");
				 printf("\n\t\t\t\t\t\t\t\t\t\t\t   TIC TAC TOE\n");
				 printf("=============================================================================================================================================================================================");
	             gotoxy(37,5);
	             f5=fopen("credits.txt","r");
	             while((c=getc(f5))!=EOF)
	             printf("%c",c);
	             fclose(f5);
	             printf("\n\n\t\t\t\tBROUGHT TO YOU BY NAG BHUSHAN AND  CO.");
	             printf("\n\n\n\t\tPRODUCER:\t\t\t\tNag Bhushan.\n\n\n\t\tLEAD PROGRAMMER:\t\t\tMohinish Chatterjee.\n\n\n\t\tIDEAS AND SUGGESTIONS BY:\t\tNag Bhushan.\n\n\t\t\t\t\t\t\tD.V.K Balakrishna.\n\n\t\t\t\t\t\t\tRahul Kumar Kumawat.\n\n\n\t\tGAME TESTERS:\t\t\t\tMohinish Chatterjee.\n\n\t\t\t\t\t\t\tNag Bhushan.\n\n\t\t\t\t\t\t\tD.V.K Balakrishna.\n\n\t\t\t\t\t\t\tRahul Kumar Kumawat.");
                 printf("\n\n\n\n\n\t\t\t\tPress Enter to return to Main Menu.");
                 getchar();
                 getchar();
                 clrscr();
                 goto main; 
                 
		case 4:  system("cls");
				 exit(0);
		        
		
				
		default:  gotoxy(38,25);
                  printf("WRONG CHOICE!!! Enter again: ");  
	              goto start;    
                  getchar();
       
                           
                            
                           
					                                  
					                	
                
    
    }
	getchar();
    return 0;
	
}
