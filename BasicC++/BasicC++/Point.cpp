//
//  Point.cpp
//  BasicC++
//
//  Created by y on 2017/12/22.
//  Copyright © 2017年 y. All rights reserved.
//

#include "Point.hpp"

int Point::getY(){

    return this->y;

}



int Point::getX(){

    return this->x;
}
void Point::setX(int x){
    this->x =x;
}

void Point::setY(int y){

    this->y =y;
}

Point::Point(int x,int y){
    this->x =x;
    this->y =y;

};

Point::Point(Point &p){
    this->x =p.getX();
    this->y =p.getY();
};

