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
int sumvector(vector<int> vvector){
    int sum=0;
    for (int i = 0; i < vvector.size(); ++i) {
        sum+=vvector[i];
    }
    return sum;
}
TEST(sumtest,test1){
    vector<int> numbers;
    for (int i = 0; i < 10; ++i) {
        numbers.push_back(5);
    }
    ASSERT_EQ(sumvector(numbers),50);
}
bool anagram(string first, string second){
    if(first.length()==second.length()){
        int j=0;
        int i;
        for (i = 0; i <second.length() ; i++) {
            if (first[j]==second[i]){
                second.erase(i,1);
                j++;
                i=-1;
                if(second.length()==0){
                    return true;
                }
            }
        }
    }
    return false;
}

TEST(anagram,testanagram){

    ASSERT_EQ(anagram("elvos","lives"),true);
}