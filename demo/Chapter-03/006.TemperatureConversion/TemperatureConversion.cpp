/*
 * �ɶ��G2018/03/29
 * �\��G
 *      �ū��ഫ���B��C
 * �ت��G
 *      ���x��¦��N�B��l�C
 */

#include <stdio.h>
#include <conio.h>

int main(void){
    
    double C, F;
    
    printf("��J�ؤ�ūסG");
    scanf("%lf", &F);
    C = (double)(F - 32) * 5 / 9;
    printf("%lf �ഫ�����ū׬� %lf ��\n", F, C);
    
    printf("��J���ūסG");
    scanf("%lf", &C);
    F = (double)C * 9 / 5 + 32;
    printf("%lf �ഫ���ؤ�ū׬� %lf ��\n", C, F);
    
    getch();
    return 0;
}

/*  
    ------------ �b cmd ����X���G ---------------

    ��J�ؤ�ūסG82.4
    82.400000 �ഫ�����ū׬� 28.000000 ��
    ��J���ūסG28
    28.000000 �ഫ���ؤ�ū׬� 82.400000 ��
    
    ----------------------------------------------
 */