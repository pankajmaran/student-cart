void Cycle(char user[]){
	
char name[20],pry[20],ch='\0';
int pamt,samt,i,flag;
int dd,mm,yy;

 printf("enter cycle name:");
cin>>name;
//FILE *fp=(user,"a");
//fgets(name, 20, stdin);
// gets(name);
 printf("\npurchase date in dd/mm/yy:");
 fflush(stdin);
//scanf("%s",&pry);
 while(1)
{
cin>>pry;
if((strlen(pry)==8 && pry[0]<'4' &&pry[3]<'2' && pry[4]<'3' && pry[6]<'2' && pry[7]<'9' || (pry[0]=='3' && pry[1]<'2') ) && ((pry[4]=='2' &&  pry[0]<'3'&& pry[2]<='9')) )
{ i=0;flag=0;
//if(pry[4]=='2' &&  pry[0]<'3'&& pry[2]<'9') 
yy=pry[7]-'0'+(pry[6]-'0')*10;
	while(i<8)
	{
		if(((pry[i]<'0' || pry[i]>'9') && pry[i]!='/') || (yy%4!=0 && pry[2]==9)  )
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

 printf("\nPrice when you purchase Cycle\n");
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
 
 FILE *fp;
 fp=fopen("Cycles.txt","a");
if(fp==NULL)
{
  printf("something went wrong\n");
  return ;
}
fprintf(fp,"%-15s %-15s %-15s %-15d %-15d %-15s    %c",user,name,pry,pamt,samt,phn,ch);
//fprintf(output,"%-15s %-15s %-15d %-15d %-15s    %c",name,pry,pamt,samt,phn,ch);

fputs("\n",fp);
 fclose(fp);
 system("cls");
 main_menu(user);
 return ;
}

void showCycle(char user[])
{
 char ch;
 FILE *fp;
 string u,n,pry,phn;
 int  pamt,samt;
 ifstream input("Cycles.txt");
 //fp=fopen("Cycles.txt","r");
 
 /*if(fp==NULL)
 {
 printf("Nothing to show\nplease visit again after few days\n");
 getch();
 return ;
 } */
 cout<<"COMPANY NAME\tPURCHASED DATE\tMRP\t\tOFFERD PRICE\tMOBILE NO.\n";
 /*ch=fgetc(fp);
  while(ch!=EOF)
  {
  printf("%c",ch);
  ch=fgetc(fp);
  } */
  //getch();
  while(input>>u>>n>>pry>>pamt>>samt>>phn)
  {
 //	printf("%-15s %-15s %-15d %-15d %-15s     \n",n,pry,pamt,samt,phn);
//f
  	cout<<n<<"\t\t"<<pry<<"\t  "<<pamt<<"\t\t"<<samt<<"\t\t"<<phn<<endl;
  }
  int res;
  cout<<"press 1 to purchase\n";
  cin>>res;
   
  if(res==1)
  {
  /*	char n[20],d[20];
  float a;
  cout<<"what you want to puchase\n";
  cout<<"enter name:";
  cin>>n;
  cout<<"enter date ";
  cin>>d;
  cout<<" enter price\n";
  cin>>a; */
  
  del(user);
  }
  
 fclose(fp);
return ;
}
