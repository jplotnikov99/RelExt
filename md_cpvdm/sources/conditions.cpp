#include "general_model.hpp"
#include "../model.hpp"

bool DT::ModelInfo::check_conditions(){
    using namespace PAR;
    CHECKCONDITION(mH1 < mH2)
    CHECKCONDITION(mH2 < mH3)
    CHECKCONDITION(mH1 < mHc)

    return true;
}