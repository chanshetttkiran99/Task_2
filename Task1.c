/**
 * @file Task1.c
 * @author Kirankumar (chanshettykiran99@gmail.com)
 * @brief To Creat a String & represents last 4-bytes of any array of size 8
 * @date 2023-09-21
 * 
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[12] = "Test";  //The Str String with a fixed size of 12 bytes
    char arr[8] = {'k','i','r','n','a','b','c','d'};   //Example 8-byte array

    strncpy(str+4,arr+4,4);   // Copy the first 4 characters
    printf("str: %s\n",str);   // Print the result
    return 0;
}