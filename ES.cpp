//
//  ES.cpp
//  search
//
//  Created by WU,MENG-TING on 2020/7/1.
//  Copyright © 2020 WU,MENG-TING. All rights reserved.
//

#include "ES.hpp"

ES::ES():bits(10),iter(5){
    vector<int> temp1(10,0);
    vector<vector<int> > temp2(iter,vector<int>(10,0));
    vector<int> temp3(5,0);
    bitstr = temp1;
    max_bitstr = temp1;
    record_bitstr = temp2;
    record_value = temp3;
}

ES::ES(int bits,int iter):bits(bits),iter(iter){
    //starting point 0
    vector<int> temp1(bits,0);
    vector<vector<int> > temp2(iter,vector<int>(bits,0));
    vector<int> temp3(iter,0);
    bitstr = temp1;
    max_bitstr = temp1;
    record_bitstr = temp2;
    record_value = temp3;
}

void ES::run(){
    max_value = value = FitnessFunction(bitstr);
    max_bitstr = bitstr;
    int it=1;
    //stopping condition
    while (it<iter&&max_value<bits){
        add1();
        value = FitnessFunction(bitstr);
        if (value>max_value){
            max_value = value;
            max_bitstr = bitstr;
        }
        record_bitstr[it] = max_bitstr;
        record_value[it] = max_value;
        it++;
    }
}

void ES::add1(){
    int i=0;
    while(bitstr[i]==1){
        bitstr[i]=0;
        i++;
    }
    bitstr[i]=1;
}

int ES::FitnessFunction(vector<int> str){
    int sum=0;
    for (int i=0;i<str.size();i++)
        sum+=str[i];
    return sum;
}

