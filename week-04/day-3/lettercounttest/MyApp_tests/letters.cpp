//
// Created by HP on 2019. 10. 02..
//
#include <gtest/gtest.h>
#include "MyClass.h"
#include <map>

int lettercount(string input,char asked) {
    int count = 1;
    map<char, int> mymap;
    int j = 0;
    int reallenght=input.length();

    for (int i = 0; i <input.length() ; ++i) {
        for (int k = j+1; k < input.length(); ++k) {
            if (input[j]==input[k]){
                count++;
                input.erase(input.begin()+k);
                k-=1;
            }
            if(input.length()==1){
                mymap.insert(pair<char,int>(input[j],count));
                return mymap[asked];
            }
        }
        mymap.insert(pair<char,int>(input[j],count));
        j++;
        count=1;
    }
    return mymap[asked];
}

TEST(letter,count){
    ASSERT_EQ(lettercount("bbbbbbbbbbbbb",'b'),13);
}