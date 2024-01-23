#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void easy();
void inter();
void hard();
void chat(int q,int right,int wrong);

int main()
{
	int s;
	do{ 
	int ch;
	system("cls");
		printf("\t\t\t\t--------------------------------\n");
		printf("\t\t\t\t\tWelcome to Quiz\n");
		printf("\t\t\t\t--------------------------------\n");
		char name[30];
		printf("\t\t\t\t--------------------------------\n\n");
		printf("\t\t\t\t\tTest Your Brain\n\n");
		printf("\t\t\t\t--------------------------------\n");
    	printf("\t\t\t\t\tEnter name:\n\t\t\t\t\t");
    	fgets(name, sizeof(name), stdin);
    	printf("\t\t\t\t\tName:");
    	puts(name);
    	printf("\t\t\t\t--------------------------------\n");
    	printf("\t\t\t\t\tDifferent levels are:\n");
    	printf("\t\t\t\t\t1. Easy\n");
    	printf("\t\t\t\t\t2. Intermediate\n");
    	printf("\t\t\t\t\t3. Hard\n");
    	printf("\t\t\t\t\tEnter your choice\n\t\t\t\t\t");
    	scanf("%d",&ch);
    	
    	switch(ch)
		{
		case 1:
			easy();
		       break;

		case 2:
			inter();
		       break;

        case 3:
        	hard();
		       break;
		       
		default:
			printf("Invalid key pressed");
			}
			printf("\nEnter 1 to retake the quiz or 0 to end the quiz");
			scanf("%d",&s);
		}while(s!=0);
	}
void easy()
{
	system("cls");
	int count=0,n=1;
	int right=0,wrong=0;
	int q;
	FILE *fp,*p;
	fp=fopen("easy.txt","r");
	p=fopen("easy.txt","r");
	if(fp!=NULL)
	{
		
		char a;
		int count2=0;
		a=fgetc(p);
		while(a!=EOF)
		{
			if(a==':')
			{
				count2++;
			}
			a=fgetc(p);
		}
		
		printf("Total Number of Questions in Easy level are %d\n",count2);
		printf("How many Questions do You Want To answer = ");
		scanf("%d",&q);
		
		char ch=fgetc(fp),c;
		int ans=0;
		while(ch!=EOF)
		{						
			while(count!=(5*n))
				{
					printf("%c",ch);
					ch=fgetc(fp);
					
					if('\n'==ch)
					count++;
					if(ch==EOF||q==ans)
					break;
				}
				if(ch==EOF||q==ans)
					break;
					
					printf("\nEnter your choice = ");
					scanf(" %c",&c);			
			if(count==(5*n))
			{
				ch=fgetc(fp);
				do{
					ch=fgetc(fp);
					if(ch==':')
					{
						ans++;
						printf("q= %d and ans = %d\n",q,ans);
						ch=fgetc(fp);
						if(ch==c)
						{
							right++;
						}
						else
						{
							wrong++;
						}
					}
				}while(ch!='\n');
				
			}
			n++;
		}
	}
	else
	{
		printf("file does not exsits\n");
		exit(1);
	}
	
	fclose(fp);
	chat(q,right,wrong);
}

void inter()
{
	system("cls");
	int count=0,n=1;
	int right=0,wrong=0;
	int q;
	FILE *fp,*p;
	fp=fopen("inter.txt","r");
	p=fopen("inter.txt","r");
	if(fp!=NULL)
	{
		
		char a;
		int count2=0;
		a=fgetc(p);
		while(a!=EOF)
		{
			if(a==':')
			{
				count2++;
			}
			a=fgetc(p);
		}
		
		printf("Total Number of Questions in Intermidate level are %d\n",count2);
		printf("How many Questions do You Want To answer = ");
		scanf("%d",&q);
		
		char ch=fgetc(fp),c;
		int ans=0;
		while(ch!=EOF)
		{						
			while(count!=(5*n))
				{
					printf("%c",ch);
					ch=fgetc(fp);
					
					if('\n'==ch)
					count++;
					if(ch==EOF||q==ans)
					break;
				}
				if(ch==EOF||q==ans)
					break;
					
					printf("\nEnter your choice = ");
					scanf(" %c",&c);			
			if(count==(5*n))
			{
				ch=fgetc(fp);
				do{
					ch=fgetc(fp);
					if(ch==':')
					{
						ans++;
						printf("q= %d and ans = %d\n",q,ans);
						ch=fgetc(fp);
						if(ch==c)
						{
							right++;
						}
						else
						{
							wrong++;
						}
					}
				}while(ch!='\n');
				
			}
			n++;
		}
	}
	else
	{
		printf("file does not exsits\n");
		exit(1);
	}
	
	fclose(fp);
	chat(q,right,wrong);
}

void hard()
{
	system("cls");
	int count=0,n=1;
	int right=0,wrong=0;
	int q;
	FILE *fp,*p;
	fp=fopen("hard.txt","r");
	p=fopen("hard.txt","r");
	if(fp!=NULL)
	{
		
		char a;
		int count2=0;
		a=fgetc(p);
	
		while(a!=EOF)
		{
			if(a==':')
			{
				count2++;
			}
			a=fgetc(p);
		}
		
		printf("Total Number of Questions in Advanced level are %d\n",count2);
		printf("How many Questions do You Want To answer = ");
		scanf("%d",&q);
		
		char ch=fgetc(fp),c;
		int ans=0;
		while(ch!=EOF)
		{						
			while(count!=(5*n))
				{
					printf("%c",ch);
					ch=fgetc(fp);
					
					if('\n'==ch)
					count++;
					if(ch==EOF||q==ans)
					break;
				}
				if(ch==EOF||q==ans)
					break;
					
					printf("\nEnter your choice = ");
					scanf(" %c",&c);			
			if(count==(5*n))
			{
				do{
					if(ch==':')
					{
						ans++;						
						ch=fgetc(fp);
						if(ch==c)
						{
							right++;
						}
						else
						{
							wrong++;
						}
					}
					ch=fgetc(fp);
				}while(ch!='\n');
				
			}
			n++;
		}
	}
	else
	{
		printf("file does not exsits\n");
		exit(1);
	}
	
	fclose(fp);
	chat(q,right,wrong);
}

void chat(int q,int right,int wrong)
{
	system("cls");
	printf("Total Attempted ---->%d\n",q);
	printf("Correct chosen  ---->%d\n",right);
	printf("Wrong   chosen  ---->%d\n",wrong);
	printf("Marks Obtained  ----> %d / %d\n",right*4,q*4);
	char a[100];
	int per=(right*100)/q;
	if(per>=90)
	strcpy(a,"Excellent");
	else if(per>=80&&per<90)
	strcpy(a,"Good");
	else if(per>=70&&per<80)
	strcpy(a,"Average");
	else if(per>=60&&per<70)
	strcpy(a,"Need Improvement");
	else if(per>=50&&per<60)
	strcpy(a,"Bad");
	else if(per<50)
	strcpy(a,"Very Bad");
	
	printf("Comment         ----> %s",a);
	
}