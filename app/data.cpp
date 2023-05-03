#include <iostream>
#include "data.h"
#include "..\models\subject.h"

using namespace std;

void initListSubject()
{
    subjects[0].initSubject(1, "Math", "prove 1 + 1 = 2");
    subjects[1].initSubject(2, "English", "i'm fine thank you and you");
    subjects[2].initSubject(3, "German", "Oui");
    subjects[3].initSubject(4, "Chinese", "Ching Chong bing bing ling ling");
    subjects[4].initSubject(5, "VietNamese", "You know english?");
}