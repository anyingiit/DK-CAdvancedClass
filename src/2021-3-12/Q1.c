//
// Created by AnYing on 2021/3/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>




char* creatCharMem(int *size){
    int defaultSize = 10;
    if (*size <= 0){
        *size = defaultSize;
    }
    char *data = (char *)calloc(*size, sizeof(char));
    if (data == NULL){
        printf("not has mem space...\n");
        exit(-1);
    }
    return data;
}

char* resize(char *source, int size, int newSize){
    char *n = (char *)calloc(newSize, sizeof(char));
    if (n == NULL){
        printf("not has mem space...\n");
        exit(-1);
    }
    for (int i = 0; i < size; i++) {
        *(n+i) = *(source+i);
    }
    free(source);
    return n;
}

char* inputChar(char *target, int *targetLen){
    int iTemp = 0;
    char cTemp;
    while ((cTemp = getchar()) != '\n'){
        if (*targetLen/2 < iTemp){
            target = resize(target, *targetLen, *targetLen * 2);
            *targetLen = *targetLen * 2;
        }
        *(target+iTemp) = cTemp;
        iTemp++;
    }
    *(target+iTemp) = '\0';
    return target;
}

char* insert(char *s1,char *s2,int n){
    int s1StrLen = strlen(s1);
    int s2StrLen = strlen(s2);
    int s1LastTempLen = s1StrLen - n + 1;
    char *s1LastTemp = creatCharMem(&s1LastTempLen);
    for (int i = 0; i < s1StrLen - n; i++) {
        *(s1LastTemp+i) = *(s1 + n + i);
    }
    *(s1LastTemp + s1StrLen - n) = '\0';
    int s1NewSize = s1StrLen + s2StrLen;
    s1 = resize(s1, s1StrLen, s1NewSize + 1);
    for (int i = 0; i < s2StrLen; i++) {
        *(s1 + n + i) = *(s2 + i);
    }
    for (int i = 0; i < strlen(s1LastTemp); i++) {
        *(s1 + n + s2StrLen + i) = *(s1LastTemp + i);
    }
    *(s1 + n + s2StrLen + strlen(s1LastTemp)) = '\0';
    return s1;
}

int main(){
    char *s1, *s2;
    int s1Len, s2Len;
    s1 = creatCharMem(&s1Len);
    s2 = creatCharMem(&s2Len);
    int insertPoint;
    printf("ÊäÈës1×Ö·û´®:");
    s1 = inputChar(s1, &s1Len);
    printf("ÊäÈës2×Ö·û´®:");
    s2 = inputChar(s2, &s2Len);
    printf("ÇëÊäÈë²åÈëÎ»ÖÃ:");
    scanf("%d", &insertPoint);
    printf("================================\n");
    printf("s1×Ö·û´®:%s\n", s1);
    printf("s2×Ö·û´®:%s\n", s2);
    printf("×Ö·û´®²åÈëÎ»ÖÃ:%d\n", insertPoint);
    printf("×Ö·û´®s1²åÈë×Ö·û´®s2Ç°´óÐ¡:%d\n", strlen(s1));
    printf("================================\n");
    s1 = insert(s1, s2, insertPoint);
    printf("s1×Ö·û´®²åÈës1×Ö·û´®ºó:%s\n", s1);
    printf("×Ö·û´®s1²åÈë×Ö·û´®s2ºó´óÐ¡:%d\n", strlen(s1));
    return 0;
}
