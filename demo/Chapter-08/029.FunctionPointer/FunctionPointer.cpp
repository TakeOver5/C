/*
 * �ɶ��G2018/04/22
 * �\��G
 *      �p�� x + y�C
 * �ت��G
 *      �m�߫��оާ@�C
 */

#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main(void){
    
    /* �ŧi�禡���� p�A�㦳��Ӿ�Ƥ޼� */
    int ans, (*p)(int, int);
    
    /* �N p ���V�禡 add */
    p = add;
    
    /* �����I�s add �禡 */
    ans = (*p)(10, 5);
    
    printf("%d\n", ans);
    
    system("pause");
    return 0;
}

int add(int x, int y){
    
    return x + y;
    
}

/*  
    ------------ �b cmd ����X���G ---------------
  
    15
    
    ----------------------------------------------  
 */