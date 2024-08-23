#include "matchingOptions.h"

matchingOptions::matchingOptions(){
    std::cout<<" Matching options function "<<std::endl; 

}
matchingOptions::~matchingOptions(){

};

bool matchingOptions::digitMatcher(const std::string &line, const std::string &pattern){
    std::cout<<"calling digitMatcher "<<std::endl;
    //matching digit string options
    std::string substring; 
    if(pattern == "/d"){
        //this is a d
      // for(int i =0; i < line.size(); i++){
         try {
                
                int value = std::stoi(line); // try to convert string to int
                std::cout<<"The value of the function is "<<value<<std::endl;
                
                //i = atoi(line[i]);  // convert the next line parameter into integer
                return true;
            }
            catch (const std::invalid_argument& e) {
                std::cout <<"invalid argument passed to stoi "<<substring<<" "<<e.what()<<std::endl;
                return false;
            } 
      // }
       return false; 
        
    }else{
        return false;
    }
}