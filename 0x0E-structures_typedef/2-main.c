#include <stdio.h>
#include "dog.h"



/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)

{

    dog_t my_dog;

    my_dog.name = "Wuppy";
    my_dog.age = 30;
    my_dog.owner = "Hoss";



    print_dog(&my_dog);

    return (0);

}
