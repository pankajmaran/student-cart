void Laptops()
{
FILE *fp;
char name[20],pry[20],ch='\0';
int pamt,samt;

 printf("enter company name:");
cin>>name;
//fgets(name, 20, stdin);
// gets(name);
 printf("\npurchase date in dd/mm/yy:");
 {
 	while(1)
	{
		cin>>pry;
		int n=strlen(pry);
		if(strlen(pry)==8)
		{
			for(int i=0;i<n;i++)
			{
				if((pry[i]<'0' && pry[i]>'9') && ) 
			}
			break;
			
		}
		else
		{
			cout<<"type in correct format\n";
		}
	}
 	
 }
 
 printf("\nPrice when you purchase it\n");
 scanf("%d",&pamt);
 printf("enter price at which you want to sell\n");
 scanf("%d",&samt);
 cout<<"enter mobile no.\n";
 char phn[12];
 cin>>phn;
 fp=fopen("Laptops.txt","a");
if(fp==NULL)
{
  printf("something went wrong\n");
  return ;
}
 //fprintf(fp,"%s\t%s\t%d\t%d\t%s    %c",name,pry,pamt,samt,phn,ch);
 fprintf(fp,"%-15s %-15s %-15d %-15d %-15s    %c",name,pry,pamt,samt,phn,ch);
 fputs("\n",fp);
 fclose(fp);
 return ; 
}
void showLaptops()
{
	FILE *fp;
	int i=1;
char ch='\0';
system("CLS");
cout<<"COMPANY NAME\tPURCHASED DATE\t MRP\t\tOFFERD PRICE\tMOBILE NO.\n";
 fp=fopen("Laptops.txt","r");
if(fp==NULL)
{
  printf("something went wrong\n");
  return 0;
}
ch=fgetc(fp);
//cout<<i<<"\t";
 while(ch!=EOF)
  {
  /*	if(ch=='#')
  	cout<<endl;
  	else */
  printf("%c",ch);
  ch=fgetc(fp);
  }
  fclose(fp);
  getch();
 return 0; 
}
