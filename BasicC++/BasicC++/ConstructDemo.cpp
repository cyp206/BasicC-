//
//  ConstructDemo.cpp
//  BasicC++
//
//  Created by y on 2017/12/21.
//  Copyright © 2017年 y. All rights reserved.
//
#include <iostream>
#include "ConstructDemo.hpp"
using namespace std;

People::People(){
    this -> age =-1 ;
    this -> weight =-2;
    
}

People::People(int age,int weight ){
    this -> age =age;
    this -> weight =weight;
}

int People::getAge(){
    return this->age;
}
int People::getWeight(){
    return this->weight;
}


People::~People(){
    
    printf("i can fly \n");
}

void People::say(){
    cout << "---"<<"\n";
}

void People::walk(){
    cout << "People" << "warlk"<<"\n";
}


   void People::eat(){

    cout << "people" << "eat"<< "\n";
}

