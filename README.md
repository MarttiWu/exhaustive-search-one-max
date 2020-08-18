# Exhaustive Search

The Exhaustive Search Algorithm is a technique that has low efficiency.

Exhaustive Search goes through all possibilities.

Theoretically, Exhaustive Search has the ability to find the optimum solution.

However, time is limited in reality.

# One-max problem

The one-max problem is a basic problem.

Given a bit string of  0's and 1's, the aim is to find a bit string which contains the most 1's.

# Usage

1. Run directly in the terminal by typing the following:

        #./main [algo] [runs] [iter] [bits] [filename]
        ./main es 1 20000 100 ""
    
2. Or if you want to run multiple times, just by opening the search.sh and add whatever you want to run.  

# Customize

You can change the iteration block by modifying 

        const int block=100;
in "execute.h".

# Results

![alt text](https://github.com/MarttiWu/exhaustive-search-one-max/blob/master/ES_one_max.png)

