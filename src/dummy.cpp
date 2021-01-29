#include "TalkShit.h"
#include "ShitTalker.h"


int main () {

    std::cout << "I compiled successfully" << std::endl;

    TalkShit shitTalker;

    std::string fav_phrase{"Fuck Bitches, Get Money!"};

    shitTalker.learnPhrase("Sup Bitch!");
    shitTalker.learnPhrase(fav_phrase);

    ShitTalker degen(shitTalker);

    std::string to_teacher = degen.cussOutTeacher(1);

    std::cout << to_teacher << std::endl;


    // std::string stupid_phrase_1 = shitTalker.saySomethingStupid(0);

    // std::string stupid_phrase_2 = shitTalker.saySomethingStupid(1);

    // std::cout << stupid_phrase_1 << std::endl;

    // std::cout << stupid_phrase_2 << std::endl;

}