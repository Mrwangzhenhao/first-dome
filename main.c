include <reg51.h>

void Delay_s(unsigned int t);

void main(void)
{
  while(1)
  {
    
  }
}

void Delay_s(unsigned int t)		//@11.0592MHz
{
	unsigned char i, j, k,x;
	for(x=t;x>0;x--)
	{
		_nop_();
		i = 8;
		j = 1;
		k = 243;
		do
		{
			do
			{
				while (--k);
			} while (--j);
		} while (--i);
	}	
}

