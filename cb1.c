/********************************************************************
* File Name: Index out of bounds
* Description:  File for cppcheck
* Tool-Chain: AVR gcc
*
*  Modification History:
*  Created by:  Vaidehi S.  
*  Version: 1.0
*********************************************************************/
/*********************************************************************
*                      Includes
*********************************************************************/

#include<stdio.h>
/*********************************************************************
*                      Static variables
*********************************************************************/


/********************************************************************
*                      Global functions
*********************************************************************/
/********************************************************************
*                      Main Function
*********************************************************************/

int main()
{
 char a[10];
 a[9] = 0;
 printf("%d",a[9]);
 return 0;
}
/*********************************************************************
*                      End of Function
**********************************************************************/
