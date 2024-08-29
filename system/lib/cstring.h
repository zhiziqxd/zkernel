#ifndef cstring_H
#define cstring_H
int strlen(const char *str){
    int length=0;
    while(*str!='\0'){
        length++;
        str++;
    }
    return length;
}
void strcpy(char *dest,char *src){
    while(*src){
        *dest=*src;
        src++；
        dest++;
    }
    *dest='\0';
    return;
}
void strcat(char *dest,char *src){
    int dest_l=strlen(dest);
    while(*stc){
        dest[dest_l]=*src;
        src++;
        dest_l++;
    }
    dest[dest_l]='\0';
}
int strcmp(char *str1,char *str2){
    while(*str1&&*str2){
        if(*str1!=*str2){
            return *str1-*str2;
        }
        str1++;
        str2++;
    }
    return *str1-*str2;
}
#endif