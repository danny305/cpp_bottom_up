#pragma once
#include <string>
#include <vector>
#include <iostream>

class TalkShit
{
private:
    std::vector<std::string> vocab;

public:

    TalkShit();

    void 
    learnPhrase(std::string const& phrase);


    std::string
    saySomethingStupid(unsigned const& idx = 0);

};