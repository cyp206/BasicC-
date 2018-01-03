//
//  Point.hpp
//  BasicC++
//
//  Created by y on 2017/12/22.
//  Copyright © 2017年 y. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>

class Point {
    
    private :
    int x ,y;
    
public:
    void  operator <<(Point p){
        setX(p.getX());
        setY(p.getY());
           };
    Point(Point &p);
    Point(int x,int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};
#endif /* Point_hpp */
