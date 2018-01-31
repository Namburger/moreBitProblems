//Vu, Nam
//prog1

#include <stdio.h>
#include <stdint.h>
#include "prog1.h"

void getBinary(unsigned n){
	unsigned i;
	for(i=1<<31;i>0;i=(i/2)){
		(n&i)? printf("1") : printf("0");
	}
	printf("\n");
}

int main(){

	//testing function hw2_58();
	int a = hw2_58();
	printf("function hw2_58() returns %d\n",a);
	printf("\n");

	//testing function hw2_59();
	unsigned b1 = 0xffffffff;
	//getBinary(b1);
	unsigned b2 = 0x00000000;
	//getBinary(b2);
	unsigned b = hw2_59(b1,b2);
	getBinary(b);
	printf("function hw2_59() returns %u\n", b);
	printf("\n");

	//testing function hw2_60();
	int index = 2;
	unsigned c1 = 0x76543210;
	//getBinary(c1);
	unsigned char c2 = 0xaa;
	//getBinary(c2);
	//unsigned set = (c2<<(index*8));
	//getBinary(set);
	//unsigned mask = ~(0xff<<(index*8));
	//getBinary(mask);
	//c1&=mask;
	//getBinary(c1);
	//unsigned mask2 = set+c1;
	//getBinary(mask2);

	unsigned c = hw2_60(c1,index,c2);
	printf("function hw2_60 returns %u\n",c);
	getBinary(c);
	printf("\n");

	//testing function hw2_61a
       	int d = hw2_61a(0);
	printf("function hw2_61a returns %d\n",d);	
	printf("\n");

	//testing function hw2_61b
	//int e1 = -43214;
	//getBinary(e1);
	//int e2 = ~e1;
	//getBinary(e2);
	
	int e = hw2_61b(0xffffffff);
	printf("function hw2_61b returns %d\n",e);	
	printf("\n");

	//testing function hw2_61c
	//getBinary(0xff);
	//int f1 = 0x12345678;
	//getBinary(f1);
	//char f2 = f1&0xff;
	//getBinary(f2);
	//int f2 = 0xffffff00;
	//getBinary(f2);
	//int f3 = !!(f2&0xff);
	//getBinary(f3);
	
	int f = hw2_61c(0xffffff00);
	printf("function hw2_61c returns %d\n",f);
	printf("\n");

	//testing hw2_61d
	//int g1 = 0x87ffffff;
	//getBinary(g1);
	//int g2 = g1&0xff000000;
	//getBinary(g2);
	//int g3 = !!g2;
	//getBinary(g3);

	//int g = 0x01ffffff;
	//getBinary(g);
	//int tmp = ((0xff<<((sizeof(int)-1)*8))&g);
	//char tmp = (g>>(8*((sizeof(int)-1))))&0xff;
	//getBinary(tmp);
	//int tmp2 = ~tmp;
	//getBinary(tmp2);
	//int tmp3=!!tmp2;
	//getBinary(tmp3);	
	int g = hw2_61d(0xffffffff);
	printf("function hw2_61d returns %d\n",g);
	printf("\n");

	//testing function hw2_64 
	//int h1 = 0xaaaaaaaa;
	//int odd = 1431655765;
	//getBinary(odd);
	//int h2 = h1&odd;
	//getBinary(h2);
	//int h3 = h2&&1;
	//getBinary(h3);
	//0x55555555=01010101010101010101010101010101 all even bits are 1
	//0xffffffff=10101010101010101010101010101010 all odd bits are 1
	int h = hw2_64(0x55555555);
	printf("function hw2_64 returns %d\n",h);	
	printf("\n");

	//testing function hw2_68();
	int n = 0;
	int i = hw2_68(n);
	printf("function hw2_68() returns ");
	getBinary(i);
	//int mask = -1<<n;
	//getBinary(mask);
	//int numberOfBits = sizeof(int)*8;
	//printf("%d\n",numberOfBits);
	//int mask = (n>=numberOfBits ? -1 : (1<<n)-1);
      	//getBinary(mask);	
	//int mask = (1u<<i);
	//getBinary(mask);
	printf("\n");

	return 0;
}
