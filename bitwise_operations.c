/* 
 * bitOr - x|y using only ~ and & 
 *   Example: bitOr(6, 5) = 7
 *   Legal ops: ~ &
 *   Max ops: 8
 */

int bitOr(int x, int y) {
  return ~(~x & );  //TO-DO write for int y
}


/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 */

int bitAnd(int x, int y) {
  return ~(~x | ); //TO-DO write for int y
}


/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 */

int bitXor(int x, int y) {
  return ~(~x & ) & ~(x & );  //TO-DO write for int y
}


/*
 * isZero - returns 1 if x == 0, and 0 otherwise 
 *   Examples: isZero(5) = 0, isZero(0) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 */

int isZero(int x) {
  return ; //TO-DO write for int x
}


/* 
 * tmin2 - return second smallest two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 */

int tmin2(void) {
  return (1 << 31) + 1;
}


/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 */

int negate(int x) {
  return  + 1;  //TO-DO write for int x
}


/* 
 * isNegative - return 1 if x < 0, return 0 otherwise 
 *   Example: isNegative(-1) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 */

int isNegative(int x) {
  return ( ) & 1; //TO-DO write for int x
}


/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 */

int isAsciiDigit(int x) {
  return !((( + ( + 1)) >> 31 & 1) | (( + ( + 1)) >> 31 & 1)); //TO-DO write for int x and write accurate hex values
}


/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 */

int conditional(int x, int y, int z) {
  return ((() << 31 >> 31) & y) | ((!( << 31 >> 31) & z); //TO-DO write for int x
}


/* // Check if x >= 0x30 (ASCII for '0')
    int greaterOrEqual30 = !( (x + (~0x30 + 1)) >> 31 ); // x >= 0x30
    
    // Check if x <= 0x39 (ASCII for '9')
    int lessOrEqual39 = !( (~(x + (~0x39 + 1))) >> 31 ); // x <= 0x39
    
    // Combine the two conditions using bitwise AND
    return greaterOrEqual30 & lessOrEqual39; 
 * rotate4 - Rotate x to the right by 4
 *   Examples: rotate4(0x87654321) = 0x18765432
 *   Legal ops: ~ & ^ | + << >> !
 *   Max ops: 12
 */

int rotate4(int x) {
  return ((x & ) << 28) | ((x >> 4) & ~( << 28)); //write correct Hex value
}


/* 
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 */

int allOddBits(int x) {
  int mask =  | ( << 8);  //write correct Hex value
  mask = mask | (mask << 16);
  return !((x & mask)^ mask); 
}


/* 
 * divpwr2 - Compute x/(2^n), for 0 <= n <= 30
 *  Round toward zero
 *   Examples: divpwr2(15,1) = 7, divpwr2(-33,4) = -2
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 */

int divpwr2(int x, int n) {
  int sign = (x >> 31) & ((1 << n) + ~0);
  return (x + sign) >> n;
}


/* 
 * byteSwap - swaps the nth byte and the mth byte
 *  Examples: byteSwap(0x12345678, 1, 3) = 0x56341278
 *            byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
 *  You may assume that 0 <= n <= 3, 0 <= m <= 3
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 25
 */

int byteSwap(int x, int n, int m) {
  int nbyte = (x >> (n << 3)) & ;  //write correct Hex value
  int mbyte = (x >> (m << 3)) & ;  //write correct Hex value

  x = x & ~( << (n << 3));  //write correct Hex value
  x = x & ~( << (m << 3));  //write correct Hex value

  x = x | (nbyte << (m << 3));
  x = x | (mbyte << (n << 3));
  return x;
}


/* 
 * logicalShift - shift x to the right by n, using a logical shift
 *   Can assume that 0 <= n <= 31
 *   Examples: logicalShift(0x87654321,4) = 0x08765432
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 */

int logicalShift(int x, int n) {
  int make = (x >> n) & (1 << (32 + ~n));
  return ((x & (~() << 31))) >> n) | make; //Fill the space
}


/* 
 * addOK - Determine if can compute x+y without overflow
 *   Example: addOK(0x80000000,0x80000000) = 0,
 *            addOK(0x80000000,0x70000000) = 1, 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 20
 */

int addOK(int x, int y) {
  int s = x + y;
  int xsign =  x >> 31;
  int ysign = y >> 31;
  int sumsign = s >> 31;
  
  return ((xsign  ysign) & (xsign  sumsign)); //use apt operators
}


/* 
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 */

int bang(int x) {
  int combine = x  (x + 1);  //TO-DO write apt operators for x
  return (combine >> 31) + 1 ;
}


/* 
 * isLess - if x < y  then return 1, else return 0 
 *   Example: isLess(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 */

int isLess(int x, int y) {
  int dsign = (x + (y + 1)) >> 31 & 1; //correct operator for y
  int sign = (x >> 31 & 1) ^ (y >> 31 & 1);
  return (sign & (x >> 31 & 1)) | ((!sign) & (dsign));
}


/* 
 * is0orMore - return 1 if x >= 0, return 0 otherwise 
 *   Example: is0orMore(-1) = 0.  is0orMore(0) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 6
 */

int is0orMore(int x) {
  return !(x >> 31);
}
