#include <stdio.h>
#include <stdbool.h>  
 
int main(){
 
    // logical operators = && (AND) checks if two or more conditions are true
   // all 3 conditions must be true in order for code to be executed

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }




        // logical operators = || (OR) checks if at least one codition is true
    
    float temp = 25;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }
   



    // logical operators = ! (NOT) reverses the state of a condition
    
    bool sunny = false;
    bool subscribed = true;
    
    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }



    
    return 0;
}