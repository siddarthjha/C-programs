int main(){
 
  char str[500000];
  int i,count=0,bal=0;
    scanf("%s",&str);
     int length=strlen(str);
     int min=100;
    for(i=0;i<length;i++)
    {
      if(str[i]==')')
      count--;
       else
      count++;
      if(min>count)
      {
        min=count;
        bal=0;
      }
      if(min==count)
      bal++;
  }
   if(count==0)
   {
      printf("%d",bal);
   }
   else
   printf("0\n");
   return 0;
}
