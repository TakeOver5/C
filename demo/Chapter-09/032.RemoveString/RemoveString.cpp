/*
 * �ɶ��G2018/05/26
 * �\��G
 *      �h���r��C
 * �ت��G
 *      �r�ꪺ�ϥΡC
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 void exclude(char*, char*);
 
 int main(void){
     
     char str1[] = "what a wonderful world!";
     char str2[] = " wonderful";
     
     
     exclude(str1, str2);
     
     puts(str1);
     
     system("pause");
     return 0;
     
 }
 
 void exclude(char *s1, char *s2){
     
     int i, s2_len = strlen(s2);
     
     //�ѩ�L�{���ѩ� s1 �����H�ɦb���ܡA�ҥH�ϥ� (int)strlen(s1) - s2_len �ˬd i �O�_�W�L�d��
     //�ѩ� strlen �^�Ǫ��ȫ��A�� size_t ���P�� int�A�ҥH���g�L (int) �૬�C
     for(i = 0; i < (int)strlen(s1) - s2_len; i++){
         //�ϥ� strncmp �ˬd�b s1 ���O�_���M s2 �ۦP�������C
         if(!strncmp(s1 + i, s2, s2_len)){
             //�p�G���ۦP�A�h�H���r��ϥ� strcpy �禡�ƻs�л\�C
             strcpy(s1 + i, s1 + i + s2_len);
             i--;
         }
     }
 }
 
 /*  
    ------------ �b cmd ����X���G ---------------
  
    what a world!
    
    ----------------------------------------------  
 */