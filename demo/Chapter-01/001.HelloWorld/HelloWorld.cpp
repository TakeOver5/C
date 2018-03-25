/*
 * 時間：2018/03/24
 * 功能：
 *      輸出 Hello World 至螢幕。
 * 目的：
 *      初次瞭解 C 語這的架構。
 */

#include <stdio.h>              //包含標準輸入與輸出標頭檔
#include <stdlib.h>             //包含標準函式庫標頭檔

int main(void){                 //主函式
    printf("Hello World\n");    //輸出函式
    system("pause");            //system() 函式呼叫系統指令 pause，當程式執行至這行敘述時，先予以暫停，以便觀察執行結果。
    return 0;                   //代表 main() 函式的傳回值。通常以傳回 0 代表程式正常執行完成。
}

/*
 *  ------------在 Dev C++ 的輸出結果：------------
 *
 *  Hello World
 *
 *  -----------------------------------------------
 *
 *  心得：
 *      任何初學的程式語言，都是由「HelloWorld」開始。
 */
