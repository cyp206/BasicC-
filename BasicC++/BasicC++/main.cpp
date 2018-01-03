//
//  main.cpp
//  BasicC++
//
//  Created by y on 2017/12/21.
//  Copyright © 2017年 y. All rights reserved.
//

#include <iostream>
#include "ConstructDemo.hpp"
#include "Man.hpp"
#include "Point.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Point *p =new Point(2,3);
    Point *p1 =   new Point(9,9);
    (*p)<<(*p1);
    cout <<"x"<<p->getX()<<"y"<<p->getY()<<"\n";
    
    return 0;
}
