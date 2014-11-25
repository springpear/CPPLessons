//
//  main.cpp
//  L01OOP
//
//  Created by 萌娇娇 on 14/11/26.
//  Copyright (c) 2014年 pear. All rights reserved.
//

#include <iostream>
#include "People.h"

//class People{
//public:
//    void sayHello(){
//        printf("Hello,CPP!\n");
//    }
//};

int main(int argc, const char * argv[]) {
    People *p = new People();
    p->sayHello();
    delete p;
    return 0;
}
