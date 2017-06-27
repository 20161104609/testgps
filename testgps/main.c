//
//  main.c
//  testgps
//
//  Created by 20161104609 on 17/6/16.
//  Copyright © 2017年 20161104609. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FILE *fp1, *fp2;
    fp1=fopen("//Users//a20161104609//Desktop//testgps//GPS170510.log","r");
    fp2=fopen("//Users//a20161104609//Desktop//testgps//writegps.txt","w+");
    char str1[70];
    char str2[70];
    char lat[9],time[7],date[7],longtitude[10],sate[3],altitude[5];
    char h[3],m[3],s[3],year[3],month[3],day[3],degree[4],divide[3];
    int i;
    while((fscanf(fp1,"%s%s",str1,str2))!=EOF)
    {
        printf("结果：%s%s\n",str1,str2);
    for(i=0;i<7;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    for(i=0;i<2;i++)
        h[i]=time[i];
    h[2]='\0';
    for(i=0;i<2;i++)
        m[i]=time[i+2];
    m[2]='\0';
    for(i=0;i<2;i++)
        s[i]=time[i+4];
    s[2]='\0';
    printf("GPRMC,utc时间:%s时%s分%s秒\n",h,m,s);
         fprintf(fp2,"GPRMC,utc时间:%s时%s分%s秒\n",h,m,s);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
        for(i=0;i<2;i++)
           degree[i]=lat[i];
          degree[2]='\0';
        for(i=0;i<2;i++)
            divide[i]=lat[i+2];
          divide[2]='\0';
    printf("正确纬度:%s度%s分\n",degree,divide);
         fprintf(fp2,"正确纬度:%s度%s分\n",degree,divide);
    for(i=0;i<7;i++)
          date[i]=str1[i+51];
    date[6]='\0';
    for(i=0;i<2;i++)
        year[i]=date[i+4];
    year[2]='\0';
    for(i=0;i<2;i++)
        month[i]=date[i+2];
    month[2]='\0';
    for(i=0;i<2;i++)
        day[i]=date[i];
    day[2]='\0';
    printf("正确日期:20%s年%s月%s日\n",year,month,day);
        fprintf(fp2,"正确日期:20%s年%s月%s日\n",year,month,day);
    for(i=0;i<10;i++)
        longtitude[i]=str1[i+27];
    longtitude[9]='\0';
    for(i=0;i<3;i++)
        degree[i]=longtitude[i];
    degree[3]='\0';
    for(i=0;i<2;i++)
        divide[i]=longtitude[i+3];
    divide[2]='\0';
    printf("正确经度:%s度%s分\n",degree,divide);
    fprintf(fp2,"正确经度:%s度%s分\n",degree,divide);
 
        
        
        
    for(i=0;i<6;i++)
        time[i]=str2[i+7];
    time[6]='\0';
        for(i=0;i<2;i++)
            h[i]=time[i];
        h[2]='\0';
        for(i=0;i<2;i++)
            m[i]=time[i+2];
        m[2]='\0';
        for(i=0;i<2;i++)
            s[i]=time[i+4];
        s[2]='\0';
    printf("GPGGA,utc时间:%s时%s分%s秒\n",h,m,s);
        fprintf(fp2,"GPGGA,utc时间:%s时%s分%s秒\n",h,m,s);
    for(i=0;i<8;i++)
        lat[i]=str2[i+14];
    lat[8]='\0';
        for(i=0;i<2;i++)
            degree[i]=lat[i];
        degree[2]='\0';
        for(i=0;i<2;i++)
            divide[i]=lat[i+2];
        divide[2]='\0';
    printf("正确纬度:%s度%s分\n",degree,divide);
        fprintf(fp2,"正确纬度:%s度%s分\n",degree,divide);

    for(i=0;i<9;i++)
        longtitude[i]=str2[i+25];
    longtitude[9]='\0';
        for(i=0;i<3;i++)
            degree[i]=longtitude[i];
        degree[3]='\0';
        for(i=0;i<2;i++)
            divide[i]=longtitude[i+3];
        divide[2]='\0';
    printf("正确经度:%s度%s分\n",degree,divide);
        fprintf(fp2,"正确经度:%s度%s分\n",degree,divide);

    for(i=0;i<2;i++)
       sate[i]=str2[i+39];
    sate[2]='\0';
    printf("卫星:%s\n",sate);
    for(i=0;i<4;i++)
        altitude[i]=str2[i+43];
    altitude[4]='\0';
    printf("高度:%s\n\n",altitude);
    fprintf(fp2,"时间%s 纬度%s 经度%s 卫星%s 高度%s\n\n ",time,lat,longtitude,sate,altitude);
    }
    fclose(fp1);
    fclose(fp2);
    
    return 0;
}
