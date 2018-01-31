//Vu, Nam
//prog1

#include <stdio.h>
#include <stdint.h>
#include "prog1.h"


//Detect an arbitrary machine's byte ordering, returning 1 if compiled
//and run on a little endian machine and 0 if on a big endian machine
//Reminder: no if statements
//
int hw2_58(){
	unsigned int n = 0x76543210;
	//Little endian format:
	//Byte address | 0x01 | 0x02 | 0x03 | 0x04 |
	//Byte content | 0x10 | 0x32 | 0x54 | 0x76 | 
	char *c = (char*) &n;	//only get the adress of the first byte of n
	return (*c == 0x10);	//comparing it to 0x10 to make sure it's the same, if it should return one, else 0
}

//return an unsigned where the least significant byte (LSB) is the
//LSB from x and all other bytes are the corresonding bytes from y
//
unsigned hw2_59(unsigned x, unsigned y)
{
	//tmp            |11111111|11111111|11111111|11111111	
	//	    x    |d_want  |d_want  |d_want  | want
	//  	    y 	 |want    |want    |want    | d_want
	//unsigned a = x&0x000000ff;
	//unsigned b = y&0xffffff00;
	//unsigned z = a+b;
	return (x&0x000000ff) + (y&0xffffff00);
}



//In word x, replace byte i with unsigned char b
//For this problem, assume unsigned is exactly 4 bytes
//Also: i is from 0 to 3; i=0 refers to LSB
//
unsigned hw2_60 (unsigned x, int i, unsigned char b)
{
	//example: x=0x76543210, i=1, b=0xAA, return 0x7654AA10 
	return (x&~(0xff<<(i*8))) + (b<<(i*8));
}



/*************************************************/
/* For 61a to 61d don't use == or != comparisons */
/*************************************************/

//if any bit of x equals 1, return 1 (otherwise return 0)
int hw2_61a (int x)
{
	//Reminder: don't use if statements or other conditionals
	//unsigned mask = 0u<<31;
	//int shift = 0;
	//while(mask&x){
	//	mask>>=1;
	//	shift++;
	//}
	//return (shift < 33);
	return !!x;
}

//if any bit of x equals 0, return 1 (otherwise return 0)
int hw2_61b (int x)
{
//	unsigned mask = 1u<<31;
//	int shift = 0;
//	while(mask&x){
//		mask>>=1;
//		shift++;
//	}
//	return (shift < 33);
	return !!(~x);
}

//if any bit in the LEAST significant byte of x equals 1, return 1
//(otherwise return 0)
int hw2_61c (int x)
{
	return !!(x&0xff);
}

//if any bit in the MOST significant byte of x equals 0, return 1
//(otherwise return 0)
int hw2_61d (int x)
{
	//reminder: C ints are as little as 2 bytes on some machines
	//          use sizeof(int) to handle int of any size
	char c = (x>>(8*((sizeof(int)-1))))&0xff;
	return !!(~c);
}



//return 1 when any odd placed bit of x is 1; otherwise return 0;
//note: the least significant bit, place 0, is even
//For this problem, assume unsigned is exactly 4 bytes
//
int hw2_64 (unsigned x)
{
	//unsigned odd = 0xaaaaaaaa;
	//odd = 10101010101010101010101010101010;
	return (x&0xaaaaaaaa)&&1;
}



//generate bit mask with least significant n bits set to 1
//Assume: 1 <= n <= w (where w is number of bits in type int)
//
int hw2_68 (int n)
{
	//Reminder: int may be 2 or more bytes
	
	//SOLUTION 1 REQUIRE COMPARISON
	return (n>=sizeof(int)*8 ? -1 : (1<<n)-1);
	
	//SOLUTION 2
	//return ~(-1<<n);
}



//return 1 if x can be represented by an n-bit 2's complement number
//otherwise return 0.  Assume: 1 <= n <= w
//
int hw2_70 (int x, int n)
{
	//Reminder: int may be 2 or more bytes
	int numberOfBits = sizeof(int)+1;
	int shift = numberOfBits+~n;
	return !(x^((x<<shift)>>shift));
}

