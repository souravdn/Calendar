#include <stdio.h>
#include<conio.h>
#include<stdlib.h> 

int firstDay(int year)
{    
	int day;
	day=(((year-1)*365)+((year-1)/4)-((year-1)/100)+((year/400)+1))%7;
	return day;
}
int main()
   {
   		system("color 2F");
   	int c;
   	
  
   	
   	
   	
   	while(c!=3)
   	{       printf("\n\n\n\n\n");
	    printf("     1.Calender 2.Age Finder 3.Exit\n");
	    printf("     Enter your choice:-");
   		 	scanf("%d",&c);
		   switch(c)
		   {
		   	
		   
		   
		   case 1:
   			{
   				
     	system("color 3F");
	int year,i,j,jp,count=0,space;
     printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                          Enter the desire year:");
     scanf("%d",&year);
     
     char *month[ ]={"jan","Feb","March","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec"};
      int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(((year%4== 0 && year%100 != 0) || (year%400== 0)))
	{
		monthDay[1]=29;
	}
	space=firstDay(year);
   for(i=0;i<12;i++){
   	printf("\n-----------------%s-----------------\n",month[i]);
	
	printf("\n  Sun   Mon  Tue  Wed  Thurs Fri  Sat\n");
	      
	 
	  for(jp=0;jp<space;jp++){ // jp=3   //;space=4
			 printf("     ");}
			 
	 for(j=1;j<=monthDay[i];j++)
	 { 
     		printf("%5d",j);	
      
	    if(++jp>6){ //jp=3+4=7
	
           printf("\n");
		   jp=0;
		   }
		space=jp;		   
		//space==7
    	 }	
   	
       
   }

//printf("space=%d",space);

   	printf("\n\n\n");			
   				
			   } break;
			   
			   
			      	
		case 2:
   			{
   				
   				
   				  
 
	system("color 1F");
    int dd,mm,yy,dd1,mm1,yy1,year,month=0,month1=0,totalMonth,day,i,j,month2,day1,yearz,monthA;
    

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                 Enter your Date of Birth as (dd mm yyyy): ");
	scanf("%d %d %d",&dd,&mm,&yy);
    printf("\n                                 Enter the Current Date as (dd mm yyyy): ");	
    scanf("%d %d %d",&dd1,&mm1,&yy1);
    printf("\n\n\n");
	 year=yy1-yy-1;
                                          //value of year
 //*********************************************************************************  
   for(i=mm;i<12;i++)
   {
   	month++; // month=month+1;
   }
   for(j=1;j<mm1;j++) //important
   {
    month1++; // month1=month1+1;	
   } 
   totalMonth=month+month1;                         //Value of Month
 //**************************************************************************************  
   if(mm==1 || mm==01)
   {
   	day=30-dd+dd1;
   	
   }
  
   else if(mm==3 || mm==03)
   {
   	day=31-dd+dd1;
   }
   else if(mm==4 || mm==04)
   {
   	day=30-dd+dd1;
   }
   else if(mm==5 || mm==05)
   {
   	day=31-dd+dd1;
   }
   else if(mm==6 || mm==06)
   {
   	day=30-dd+dd1;
   }
   else if(mm==7 || mm==07)
   {
   	day=31-dd+dd1;
   }
   else if(mm==8 )
   {
   	day=31-dd+dd1;
   }
   else if(mm==9 )
   {
   	day=30-dd+dd1;
   }
   else if(mm==10)                            
   {
   	day=31-dd+dd1;
   } 
    else if(mm==11)
   {
   	day=30-dd+dd1;
   } 
    else if(mm==12)
   {
   	day=31-dd+dd1;
   } 
    else if((mm==2 || mm==02) &&((yy%4== 0 && yy%100 != 0) || (yy%400== 0)))
   {
   	day=29-dd+dd1;
   }
   else
   {
   	day=28-dd+dd1;
   }
   
   //for extra days converted to month
   month2=day/30;
   	totalMonth=totalMonth+month2;
   	day1=day%30;
   	
   	//for extra month converted to year
   	 yearz=totalMonth/12;
   	year=year+yearz;
   	monthA=totalMonth%12;
     
   	 printf("\n                                 :)_____________ CONGRATUALATION!! _______________:)\n");                                                //value of day
   printf("\n\n                                 Your total Runnings are %d year %d month %d days.\n",year,monthA,day1);
   printf("                                 You Have to run More,Success are awated for you.\n\n\n\n");

    
     int totalDay,tMonth,totalWeek,totalHour,totalMinute,totalSecond;
     
     totalDay=day1+monthA*30+year*365;
     totalWeek=totalDay/7;
     totalHour=totalDay*24;
     totalMinute=24*60*totalDay;
     totalSecond=60*60*24*totalDay;
     tMonth=totalDay/31;
     
     
     
     printf("\n\n    TOTAL DAY: %d days.  ||    TOTALWEEK: %d weeks.   ||   TOTALHOUR: %d hours.   \n\n    TOTALMINUTE: %d minutes.    ||  TOTALSECOND: %d seconds.    ||  TOTALMONTH: %d months.   \n",totalDay,totalWeek,totalHour,totalMinute,totalSecond,tMonth);



    

   				
			   } break;
			   
			   
			   
			   		case 3:
			   			{
			   				printf("\n\n\n     !!!!!*****ThankYou*****!!!!!\n     Your application has been closed successfully!\n\n\n\n");
			   				exit(0);	
						   }
   		
			    break;
			    default:
			    	{
			    		printf("\n\nWrong Choice! Enter a valaid choice between 1-3\n\n");
					}break;

	   }
   	
   	
}
   	
}
