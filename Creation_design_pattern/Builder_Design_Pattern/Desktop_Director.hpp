#include "Desktop_builder.hpp"

class Desktop_Director {

    private:
      Desktop_Builder* desktop_Builder;
    public:
    Desktop_Director(Desktop_Builder* pDesktop_Builder){
        desktop_Builder = pDesktop_Builder;
    }

};