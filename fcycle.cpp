void Cycle(){
FILE *fp;
char name[20],pry[20],ch='\0';
int pamt,samt;

 printf("enter cycle name:");
cin>>name;
//fgets(name, 20, stdin);
// gets(name);
 printf("\npurchase date in dd/mm/yy:");
 fflush(stdin);
 scanf("%s",&pry);
 printf("\nPrice when you purchase Cycle\n");
 scanf("%d",&pamt);
 printf("enter price at which you want to sell\n");
 scanf("%d",&samt);
 char phn[12];
 cout<<"enter mobile no.\n";
 cin>>phn;
 fp=fopen("Cycles.txt","a");
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

void showCycle()
{
 char ch;
 FILE *fp;
 fp=fopen("Cycles.txt","r");
 if(fp==NULL)
 {
 printf("Nothing to show\nplease visit again after few days\n");
 getch();
 return 0;
 }
 cout<<"COMPANY NAME\tPURCHASED DATE\t MRP\t\tOFFERD PRICE\tMOBILE NO.\n";
 ch=fgetc(fp);
  while(ch!=EOF)
  {
  printf("%c",ch);
  ch=fgetc(fp);
  }
  getch();
  fclose(fp);
return 0;
}
