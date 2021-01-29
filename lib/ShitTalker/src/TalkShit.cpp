#include "TalkShit.h"



TalkShit::TalkShit(){}

void
TalkShit::learnPhrase(std::string const& phrase)
{
    vocab.emplace_back(phrase);
    std::cout << "Learned phrase: " << phrase << std::endl;
}

std::string
TalkShit::saySomethingStupid(unsigned const& idx)
{
    return vocab[idx];
}