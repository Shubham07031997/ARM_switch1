#include<lpc214x.h>
int main()
{
  IODIR1=(0<<16);
  IODIR0=(1<<0);

  while(1)
  {
     if((IOPIN1 &(1<<16))==0)
	 {
	   IOSET0=(1<<0);
	   }
	   else
	  { IOCLR0=(1<<0);}
	   }
	   }
