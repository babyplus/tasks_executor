#define FROM_MAIL       "<15017228752@yeah.net>"
#define TO_MAIL     "<495031718@qq.com>"
#define CC_MAIL       "<huangmiaomiao233@gmail.com>"

#include "entities.h"
#include "entity.h"
#include "element.h"
#include <ctime>
#include <cerrno>
#include <climits>

int main () {
    const char * test = "raw test";

    Entities tasks0("0");
    Entities tasks01("01");
    Entity task10("10", Entity::file, "demo.txt");
    Entity task11("11", Entity::raw, test);
    
    tasks0.add(&tasks01);
    tasks01.add(&task10);
    tasks01.add(&task11);

    tasks0.execute();

    return 0;
}
