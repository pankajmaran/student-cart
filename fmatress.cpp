void Matress()
{
	FILE *fp;
char name[20],pry[20],ch='\0',phn[12];
int pamt,samt;

 printf("enter gadget name:");
cin>>name;
//fgets(name, 20, stdin);
// gets(name);
 printf("\npurchase date in dd/mm/yy:");
 fflush(stdin);
 scanf("%s",&pry);
 printf("\nPrice when you purchase it\n");
 scanf("%d",&pamt);
 printf("enter price at which you want to sell\n");
 scanf("%d",&samt);
 cout<<"enter mobile no of 10 digit\n";
 cin>>phn;
 fp=fopen("Matress.txt","a");
if(fp==NULL)
{
  printf("something went wrong\n");
  return ;
}
 fprintf(fp,"%-15s %-15s %-15d %-15d %-15s    %c",name,pry,pamt,samt,phn,ch);
 fputs("\n",fp);
 fclose(fp);
 return ;
}
void showMatress()
{
	FILE *fp;
	char ch;
		cout<<"COMPANY NAME\tPURCHASED DATE\t MRP\t\tOFFERD PRICE\tMOBILE NO.\n";
 fp=fopen("Matress.txt","r");
if(fp==NULL)
{
  printf("something went wrong\n");
  return 0;
}
ch=fgetc(fp);
 while(ch!=EOF)
  {
  //	if(ch=='#')
  	//cout<<endl;
  	//else
  printf("%c",ch);
  ch=fgetc(fp);
  
  }
  getch();
 fclose(fp); 
return 0;
}
