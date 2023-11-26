#include "SelectCardsPlus/main.h"
#include "SetZombiesPlus/main.h"
#include "SimpleAvZ/lib.h"
#include "zombie_alias.h"

using namespace AvZ;

void Script(){
    OpenMultipleEffective();
    SelectCardsPlus({ICE,DOOM,COFFEE,CHERRY,SQUASH,LILY,PUFF,SUN,SCAREDY,UMBRELLA_LEAF});
    SetZombiesPlus({DOLPHIN,ZOMBONI,JACK,POGO,CATAPULT,GARG,GIGA_GARG},AVERAGE);
    SetIce({{4,7}});

    for (auto w: waves(1)){
        C(-599,LILY,4,7);
        PP(540,8.4);
    }

    for (auto w: waves(2,10,11)){
        PP(540,8.4);
    }

    for (auto w: waves(3)){
        C(120,until(710),PUFF,2,7);
        C(547,{LILY,DOOM,COFFEE},4,8);
        C(711,SUN,2,7);
    }

    for (auto w: waves(4,6,13,15)){
        PP(540,8.4);
        I(741);
    }

    for (auto w: waves(5,14)){
        PP(1150,8.4);
    }

    for (auto w: waves(7,16)){
        PP(1300,8.4);
    }

    for (auto w: waves(8)){
        C(547,{LILY,DOOM,COFFEE},3,8);
    }

    for (auto w: waves(9)){
        PP(540,8.4);
        PP(1027,8);
    }

    for (auto w: waves(12)){
        C(110,until(710),PUFF,2,7);
        C(547,{LILY,DOOM,COFFEE},4,9);
        C(701,SUN,2,7);
    }

    for (auto w: waves(17)){
        C(547,{LILY,DOOM,COFFEE},3,9);
    }

    for (auto w: waves(18)){
        PP(540,8.4);
        I(964);
    }

    for (auto w: waves(19)){
        C(700,CHERRY,4,7);
        PP(1250,8.4);
    }

    for (auto w: waves(20)){
        I(1);
        PP(1400,8.4);
        RM(2,LILY,4,7);
    }

}
