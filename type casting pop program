/*
*The population of a city has risen sharply over the past few years, thanks to a high birth rate. However, this poses a number of problems, including a housing shortage. The mayor has decided to deal with the problem and *would like to estimate the future growth of the population, and he has called you in to help!

*Please write a C-program that first reads an integer representing the current population of the city, and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). *The program should then display the expected population of the city in a year as a whole number. By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 *inhabitants. 
*/
////////////////////////////////////////////////////
Type casting
//Type casting can be used for example in such a population problem or even forexample in a school grading system where marks are in integers while as average is most likely in decimals
////////////////////////////////////////////////////
#include <stdio.h>

int main()
    {
        int current_pop,prjc_pop;
        double growth;
        scanf("%d %lf",&current_pop, &growth);
        
        prjc_pop = (int)current_pop+ (0.01)*(growth)*current_pop;
        printf("%d",prjc_pop);
        return 0;
    }
