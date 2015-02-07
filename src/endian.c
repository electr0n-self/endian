/*
 * Executable name: endian
 * Version: 0.1.0
 * Created date: 06/01/2015 
 * Last update: 06/01/2015
 * Author: Natalia
 *
 * Description: Finds out the machine endianess.
 *
 */


#include <stdio.h>


#define OK           0


int main(int argc, char** argv){
	
    unsigned number = 1;


    /* Check if addressed byte is 01H */
    if (*(char*)&number) {

        printf("This is a little-endian system.\n");

	}
    else {

	printf("This is a big-endian system.\n");
    }

    return OK;

}
