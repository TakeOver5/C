/*
 * �ɶ��G2018/10/05
 * �\��G
 *      ��J�@�ӼƦr�A�P�_�O�_�b 1~10 �����C
 * �ت��G
 *      �����ϥΡC
 */

#include <stdio.h>
#include <stdlib.h>
#define RANGE(a, b, x) (x > a && x < b) ? 1 : 0

int main(void){
    
    
    int x;
    printf("Input a number:");
    scanf("%d", &x);
    
    if(RANGE(0, 10, x))
        printf("%d is between 0 to 10\n", x);
    else
        printf("%d is not between 0 to 10\n", x);
    
    
    system("pause");
    return 0;
    
}

/*  
    ------------ �b cmd ����X���G ---------------
  
    Input a number:5
    5 is between 0 to 10
    
    ----------------------------------------------  
*/