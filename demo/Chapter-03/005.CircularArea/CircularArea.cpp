/*
 * �ɶ��G2018/03/29
 * �\��G
 *      �����@�Ӷ�b�|�p���έ��n�C
 * �ت��G
 *      �{�ѱ`�ƪ��ϥλP�ŧi�C
 */

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415   //�ϥΫe�m�B�z���w�q�`�ơA�sĶ���ݨ� PI ����r�|�H 3.1415 �N��

int main(void){
    double r;
    printf("Input a radius:");
    scanf("%lf", &r);
    printf("Circular area = %lf\n", r*r*PI);
    system("pause");
    return 0;
}

/*  
    ------------ �b cmd ����X���G ---------------
  
    Input a radius:4
    Circular area = 50.264000
    
    ----------------------------------------------
 */