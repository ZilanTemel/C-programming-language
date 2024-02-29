
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool palindromeFun(char arr[],int start ,int end){
    if (start>=end){
        return true;
    }
    if (arr[start]!=arr[end]){
        return false ;
    }
    return palindromeFun(arr,start+1,end -1);
}
int main (){
    char input [100];
	int length;
    
    printf("enter a string :");
    scanf("%s",input);
    
    length=strlen(input);
    if (palindromeFun(input,0,length-1)){
        printf("%s is a palindrome",input);
    }
    else{
        printf("%s is not a palindrome",input);
        return 0;
    }
        
    }
    

