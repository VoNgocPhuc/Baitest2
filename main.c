#include<stdio.h>

void tachbyte(unsigned short value);
void main()
{
	tachbyte(0x1234);	
}
void tachbyte(unsigned short value)
	{

		unsigned char low = 0;
		unsigned char high = 0;

		low = (unsigned char)value;
		high = value >> 8;
		printf("low = 0x%x\r\n", low);
		printf("hight = 0x%x\r\n", high);
	}



