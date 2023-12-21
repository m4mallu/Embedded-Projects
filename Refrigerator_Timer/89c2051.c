#include<AT89x051.h>
int i,j;
 void delay1()
{
 TMOD=0x01;				//STARTING 16Bit TIMER				
 	for (i=0;i<=380;i++)
	{
		for(j=0;j<=380;j++)
 		{
  			TL0=0xAF;
  			TH0=0x3C;
  			TR0=1;
  			while(TF0==0);
  			TR0=0;
  			TF0=0;
		}
 	}
}
 void delay2()
{ 
 TMOD=0x01;
 	for (j=0;j<=144;j++)
	 {
  		for(i=0;i<=144;i++)
 		{
			TL0=0XAF;
  			TH0=0x3C;
  			TR0=1;
  			while(TF0==0);
  			TR0=0;
  			TF0=0;
		}
 	}
}
void main()
{  
P1=0;
P3=0;
 while(1)
 {
 	P1_7 =1;
 	P1_6 =1;
	P1_5 =1;
		delay1();
	P1_7 =0;
 	P1_6 =0;
	P1_5 =0;
		delay2();                      
 }
}

