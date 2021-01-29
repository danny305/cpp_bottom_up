#pragma once
#include "TalkShit.h"



class ShitTalker
{
private:
    TalkShit _TS;

public:
    ShitTalker(TalkShit TS);

    std::string cussOutTeacher(unsigned);

    // void cussOutParent(unsigned) const;

    // void hitOnGirl(unsigned);
};