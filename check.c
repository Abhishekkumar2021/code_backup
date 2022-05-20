#include<stdio.h>
int main(){
	unsigned int x = -4;                //we can't able to store the negative number in unsigned data type so what happens is that the negative number first going to be Converted into the Two's complement phone Converted into the two's compliment form and then stored into the unsigned form.
	
    
    printf("Value of x in signed integer form = %d\n",x);                    // %d treats that the integer as signed. so accordingly it givees the result by taking the sign bit into the account.
    

    printf("Value of x in unsigned integer form = %u\n",x);                  //  %u treats it as unsigned integer so it gives the result accordingly.
	

    signed int y = -256*8 + 67;               //writing signed is not neccessary as only int means the same by default.
	

	printf("The value of y in ASCII character form = %c\n",y);            //The simple rule to get that what character is going to be printed is that find the modulo of that positive number with 256 and the character corresponding to the remainder is yor answer. So adding any multiple of 256 to the number will not change it's corresponding character value. 

}
