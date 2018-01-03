//
//  Man.hpp
//  BasicC++
//
//  Created by y on 2017/12/21.
//  Copyright © 2017年 y. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>
#include "ConstructDemo.hpp"
class Man:public People{

    public :
    Man(int age);
    virtual  void say();
    virtual void walk();
    void cry();
    void cry(int a);
    
    


};


#endif /* Man_hpp */
