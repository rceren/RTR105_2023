// let investigate data types and variables

#include <stdio.h>

int main(void)
{
char c, test_symbol; // declaration of discrete variables
                     //this is just creation of correspondance
                     // variable name (or identificator) VS
                     // some place and some amount of bytes in memory
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);
// after declaration value of variable is not known
printf("/new");
// that is why it is better (but not obligatory) to use definition 
char c_new = 85; // definition of discrete variable
                 // is declaration + assigning of value
                 // = assigning operation (right part is written
                 // in memory place mention be the left part)
// there is some time (in microseconds or in nanoseconds etc.) between
// every action
printf("Value of c_new variable as symbol: %c\n", c_new);
printf("Value of c_new  variable as integer number (dec): %d\n", c_new);
printf("Value of c_new  variable as integer number (oct): %#o\n", c_new);
printf("Value of c_new  variable as integer number (hex): %#x\n", c_new);

printf("\n");
// the role of variable is to be varied (changed)
// when we need we can assign new value
c = 'Y';
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 0105;
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 0x4B; // 0x4b
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 85.6; // 0.6 data will be trancated
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);

printf("\n");
c = 1.256e3; // this notation floating point
             // means 1.256e3 means 1.256e3*10^(2) big real number - 125.6
             // also at asiigning operation data about 0.3 will be trancated
printf("Value of c variable as symbol: %c\n", c);
printf("Value of c variable as integer number (dec): %d\n", c);
printf("Value of c variable as integer number (oct): %#o\n", c);
printf("Value of c variable as integer number (hex): %#x\n", c);


return 0;
}
