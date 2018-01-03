//
//  Man.cpp
//  BasicC++
//
//  Created by y on 2017/12/21.
//  Copyright © 2017年 y. All rights reserved.
//

#include "Man.hpp"
#include <iostream>

Man::Man(int age):People(age,99){
    
    
}

void  Man::say(){
    std::cout << "man say"<< "father weight is " << People::getWeight() << "\n";
}

void Man::walk(){
    std::cout << "man walk" << "\n";

}
