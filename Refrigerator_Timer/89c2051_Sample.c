#include<AT89x051.h>
P2=0;
P0=0;
void delay1()
{
 	int i;
 	TMOD=0x01;
 	for (i=1;i<=200;i++)	// 10 sec
 	{
  		TL0=0xAF;
  		TH0=0x3C;
  		TR0=1;
  		while(TF0==0);
  		TR0=0;
  		TF0=0;
 	}
}
 void delay2()
{ 
	int j;
 	TMOD=0x01;
 	for (j=0;j<=100;j++)	// 5 sec
 	{
  		TL0=0XAF;
  		TH0=0x3C;
  		TR0=1;
  		while(TF0==0);
  		TR0=0;
  		TF0=0;
 	}
}
void main()
{
	P1=0;
	P3=0;
while(1)
 {
 	P1_0 =1;
 	P1_1 =1;
		delay1();
	P1_0 =0;
 	P1_1 =0;
 		delay2();
 }
}

