//
//  ES.hpp
//  search
//
//  Created by WU,MENG-TING on 2020/7/1.
//  Copyright © 2020 WU,MENG-TING. All rights reserved.
//

#ifndef ES_hpp
#define ES_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

class ES{
public:
    ES();
    ES(int b,int iterations);
    void run();
    void add1();
    int FitnessFunction(vector<int> str);
    vector<int> get_record_bitstr(int it){return record_bitstr[it];}
    int get_record_value(int it){return record_value[it];}
private:
    int bits;
    int iter;
    vector<int> bitstr;
    int value;
    vector<int> max_bitstr;
    int max_value;
    vector<vector<int> > record_bitstr;
    vector<int> record_value;
};

#endif /* ES_hpp */
