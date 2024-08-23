#include "matchingOptions.h"

matchingOptions::matchingOptions(){
    std::cout<<" Matching options function "<<std::endl; 

}
matchingOptions::~matchingOptions(){
    
};

int matchingOptions::digitMatcher(const std::string &line, const std::string &pattern){
    //matching digit string options
    std::string substring; 
    if(pattern == "/d"){
        //this is a d
       for(int i =0; i < line.size(); i++){
         try {
                substring = line.substr(0, i);
                
                //i = atoi(line[i]);  // convert the next line parameter into integer
                return 0;
            }
            catch (const std::invalid_argument& e) {
                std::cout <<"invalid argument passed to stoi "<<substring<<" "<<e.what()<<std::endl;
                return 1;
            } 
       }
       return 1; 
        
    }else{
        return 1;
    }
}