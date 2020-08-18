//
//  execute.cpp
//  search
//
//  Created by WU,MENG-TING on 2020/7/1.
//  Copyright © 2020 WU,MENG-TING. All rights reserved.
//

#include "execute.hpp"

void execute(const int Algo,const int runs,const int iterations,const int bits,const string filename){
    ofstream fout;
    fout.open("RESULT.txt");
    vector<double> avg(iterations/block);
    if (filename==""){
        // forces runs to 1, because there are no random factors in ES
        for (int i=0;i<1;i++){
            fout<<"----------------------------------------"<<endl;
            fout<<"run: "<<i+1<<endl;
            time_t start=0, end=0;
            if (Algo==1){
                ES *r = new ES(bits,iterations);
                start = time(NULL);
                r->run();
                for (int j=0;j<=iterations/block;j++){
                    avg[j] += r->get_record_value(j*block);
                }
                fout<<"Best: "<<r->get_record_value(iterations-1)<<endl;
                end = time(NULL);
            }
            double diff = difftime(end, start);
            fout<<"Run time: "<<diff<<"s"<<endl;
        }
        fout<<"----------------------------------------"<<endl;
        for (int i=0;i<avg.size();i++){
             fout<<"Iter "<<i*block<<" : "<<avg[i]<<endl;
        }
    }
    else{
        cout<<"random number file"<<endl;
        //left blank
        //complete when needed
    }
}
