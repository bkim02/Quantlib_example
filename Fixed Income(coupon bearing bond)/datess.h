//
//  datess.h
//  Fixed Income(coupon bearing bond)
//
//  Created by kimbeom-cheol on 2017. 7. 28..
//  Copyright © 2017년 kimbeom-cheol. All rights reserved.
//

#ifndef datess_h
#define datess_h
#include <ql/quantlib.hpp>
using namespace QuantLib;

class datess{
private:
    Calendar cal;
    Date d1;
    Date d2;
    int totalholi=0;
    int totaldates=0;
    std::string name;
    
public:
    datess()=default;
    datess(Calendar cal,Date d1,Date d2,std::string name):cal(cal),d1(d1),d2(d2),name(name){
        
    }
    int getTotaldate(){
        
        for(Date d=d1;d<=d2;d++){
            totaldates++;
        }
        
        return totaldates;
    };
    int getTotalHolidays(){
        
        for(Date d=d1;d<=d2;d++){
            if(cal.isHoliday(d)){
                totalholi++;
            }
        }
        return totalholi;
    };
    std::string getCountryname(){
        
        return name;
    }
    ~datess(){
        
    }
};


#endif /* datess_h */
