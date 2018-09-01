/* Practical: Variable Scope and Functions
   Exercise 18 */

/* Joe O'Regan */
/* 15-10-2015 */

#include<stdio.h>
/*************************************************
*Name of Function: Triangle                      *
*Description: Computes the area of a triangle    *
*Parameters:                                     *
*            base -- Base of the Triangle        *
*            height -- Height of the Triangle    *
*                                                *
*Returns:                                        *
*            area of a triangle                  *
**************************************************/

float triangle()  // function definition - triangle
{
    float area,base=20.0,height=40.0;
    
    area = base * height / 2;
    
    return(area);
}

main() // main is a function
{
    int area;
    // function calls
    printf("Triangle #1 %f",triangle()); //returns just area
    
    getch();
    return(0);
 } // end of main
 
