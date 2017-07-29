//This is a calculator that is used for counting the number of holidays in the particular countries in 2017.
//Using quantlib
// I just made heater file for the class , since it is rather simple
// the last time updated : 7th July 2017
#include <iostream>
#include <ql/quantlib.hpp>
#include <math.h>
#include "datess.h"

using namespace QuantLib;




int main(){
    

 
    //instanciating the calendars
    Calendar ukcal=UnitedKingdom();
    Calendar germancal=Germany();
    Calendar uscal=UnitedStates();
    Calendar switcal=Switzerland();
    Calendar jpcal=Japan();
    
    // instanciating the start and end dates
    Date begin(1,Jan,2017),end(31,Dec,2017);
    
    // instanciating objects of each countries
    datess ukd(ukcal,begin,end,"United Kingdom");
    datess gerd(germancal,begin,end,"Germany");
    datess usd(uscal,begin,end,"United States");
    datess switd(switcal,begin,end,"Switzerland");
    datess jpd(jpcal,begin,end,"Japan");
    
    std::vector<datess> holishit{ukd,gerd,usd,switd,jpd};
  
    
  
    for(int i=0;i<=5;i++){
        std::cout<<"'The total number of "<<holishit[i].getCountryname()<<" is "<<holishit[i].getTotalHolidays()<<std::endl;
    }
  
    return 0;
}
