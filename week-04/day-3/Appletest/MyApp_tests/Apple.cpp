//
// Created by HP on 2019. 10. 02..
//
#include <gtest/gtest.h>
#include "MyClass.h"
string getApple(){
    string fruit="Apple";
    return fruit;
}
TEST(appletest, test1){
    ASSERT_EQ(getApple(),"lkj");
}