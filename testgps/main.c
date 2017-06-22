//
//  main.c
//  testgps
//
//  Created by 20161104609 on 17/6/16.
//  Copyright © 2017年 20161104609. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FILE *fp1;
    fp1=fopen("//Users//a20161104609//Desktop//testgps//GPS170510.log","r");
    //fp2=fopen("//Users//a20161104609//Desktop//testgps//writegps.txt","w+");
    char str1[70];
    char str2[70];
    char lat[9],time[7],date[7],longtitude[10];
    int i;
    fscanf(fp1,"%s%s",str1,str2);
    printf("结果：%s%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("weidu:%s\n",lat);
    for(i=0;i<7;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("shijian:%s\n",time);
    for(i=0;i<7;i++)
          date[i]=str1[i+51];
    date[6]='\0';
    printf("riqi:%s\n",date);
    for(i=0;i<10;i++)
        longtitude[i]=str1[i+27];
    longtitude[9]='\0';
    printf("jingdu:%s\n",longtitude);
    fclose(fp1);
    
    
    return 0;
}
