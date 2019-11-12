void Electronics()
{
	FILE *fp;
    char name[20],pry[20],ch='\0',cat[20];
    int pamt,samt,i,flag;

cout<<"enter category like mobile,headphons,kettle etc:\n";
cin>>cat;
 printf("enter company  name:");
cin>>name;
cout<<"enter date of purchase in dd/mm/yy format: ";
 while(1)
{
cin>>pry;
if(strlen(pry)==8  && pry[0]<'4' &&pry[3]<'2' && pry[4]<'3' && pry[6]<'2' && pry[7]<'9' || (pry[0]=='3' && pry[1]<'2'))
{ i=0;flag=0;
	while(i<8)
	{
		if((pry[i]<'0' || pry[i]>'9') && pry[i]!='/')
		{
			cout<<"enter  valid date\n";
		  flag=1;
			break;
		}
		i++;		
	}
		if(flag==0)
		break;	
}
else
cout<<"enter valid date:";
} 

 printf("\nPrice when you purchase it\n");
 while(1)
 {
 	scanf("%d",&pamt);
 	if(pamt<0)
 	cout<<"enter valid price\n";
 	else 
	 break;
 }
 printf("enter price at which you want to sell\n");
  while(1)
 {
 	cin>>samt;
 	if(samt<0)
 	cout<<"enter valid price\n";
 	else 
	 break;
 }
 char phn[12];
 cout<<"enter mobile no.\n";
 while(1)
 {
 	cin>>phn;
 	if(strlen(phn)==10)
{ 
	i=0;flag=0;
	while(i<10)
	{
		if(phn[i]<'0' || phn[i]>'9' )
		{
			cout<<"enter  valid phn no.\n";
		  flag=1;
			break;
		}
		i++;		
	}
		if(flag==0)
		break;	
}
else
cout<<"enter valid phone no.:";
} 
 
 fp=fopen("Electronics.txt","a");
 if(fp==NULL)
 {
  printf("something went wrong\n");
  return ;
 }
 fprintf(fp,"%-15s %-15s %-15s %-15d %-15d %-15s    %c",cat,name,pry,pamt,samt,phn,ch);
 fputs("\n",fp);
 fclose(fp);
 return ;
}
void showElectronics()
{
	FILE *fp;
	char ch;
 fp=fopen("Electronics.txt","r");
if(fp==NULL)
{
  printf("something went wrong\n");
  return ;
}
cout<<"CATEGORY\tCOMPANY NAME\tPURCHASED DATE\t MRP\t\tOFFERD PRICE\tMOBILE NO.\n";
ch=fgetc(fp);
 while(ch!=EOF)
  {
  /*	if(ch=='#')
  	cout<<endl;
  	else*/
  printf("%c",ch);
  ch=fgetc(fp);
  }
  fclose(fp);
  getch();
 return ; 
}
