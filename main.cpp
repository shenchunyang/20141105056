//
//  main.cpp
//  20141105056
//
//  Created by ry耷拉拉星球 on 15/11/11.
//  Copyright (c) 2015年 ry耷拉拉星球. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    // insert code here...
    int a,*p;
    a=100;
    p=&a;
    printf("a=%x &a=%x &p=%x p=%x *p=%x\n",a,&a,&p,p,*p);
    return 0;
}
