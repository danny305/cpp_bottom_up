#include "ShitTalker.h"



ShitTalker::ShitTalker(TalkShit TS)
    :_TS(std::move(TS))
    {}

std::string
ShitTalker::cussOutTeacher(unsigned idx)
{
    std::string greeting{"Yo Teach! " + _TS.saySomethingStupid(idx)};

    return greeting;
}




