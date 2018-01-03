//
//  ConstructDemo.hpp
//  BasicC++
//
//  Created by y on 2017/12/21.
//  Copyright © 2017年 y. All rights reserved.
//

#ifndef ConstructDemo_hpp
#define ConstructDemo_hpp
#include <iostream>
#include <stdio.h>
   class People{
    
public:
    People(int age,int weight);
    People();
    //析构函数
    ~People();
    //实函数
    void say();
    //虚函数
    virtual void  eat();
    //抽象函数
    virtual void walk() =0;
    int getAge();
    int getWeight();
       
    
    
private :
    int age;
    int weight;
    
    
    
};

#endif /* ConstructDemo_hpp */
