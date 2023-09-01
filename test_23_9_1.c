// test_23_9_1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>
//int arr_size(int *arr[])
//{
//    return sizeof(arr) / sizeof(arr[0]);
//}

int duplicate(int* numbers, int numbersLen) {
    // write code here
    // 创建临时数组，注：不能初始化
    
    if (numbersLen != 0) {
        int  arr[9];
   
    
        for (int i = 0;i < numbersLen;i++) {
            arr[i] = 0;
        }
        for (int j = 0;j < numbersLen;j++) {
            if (++arr[numbers[j]] > 1) {
                return numbers[j];
            }
        }
    }
    return -1;
}
int main()
{
   /* char str = "dfjsfhsfdjk";
    char str1[] = { 'a','b','c','d' };
    int arr[] = { 1,2,2,3,4 };
    int arr_size1 = sizeof(arr) / sizeof(arr[0]);
    int* p = arr;
    for (int i = 0;i < arr_size1;i++) {
        printf("%d",*p);
        if (i < arr_size1 - 1) {
            p += 1;
        }
        
    }*/
    int arr[] = { 1,2,3,4,5,6,7,3,2 };
   int end =duplicate(&arr, 9);
   printf("第一个出现重复的数字是：%d", end);
    return 0;
}