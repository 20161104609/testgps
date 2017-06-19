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
    
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104609//Desktop//testgps//GPS170510.log","r");
    fp2=fopen("//Users//a20161104609//Desktop//testgps//writegps.txt","w+");
    char   time[10],gps,latidute1,longitude1,year[10],s[5];
    double latitude,longitude,v,course;
    if(fp1==NULL)
    {
        printf("您所输入文件不存在");
               return 0;
    }
    else {
        fscanf(fp2,"$GPRMC,%6s,%c,%lf,%c,%lf,%lf,%6s,,%s",time,&gps,&latitude,&latitude1,&longitude,&longitde1,&v,&course,year,s);
        if(gps=='A')
        {
            printf("20%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[0],year[1],year[2],year[3],year[4],year[5],time[0],time[1],time[2],time[3],time[4],time[5]);
        }
        
 
        
       
       
        fclose(fp1);
        }
    
    return 0;
}
