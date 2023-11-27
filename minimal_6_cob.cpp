#include "SelectCardsPlus/main.h"
#include "SetZombiesPlus/main.h"
#include "SimpleAvZ/lib.h"
#include "zombie_alias.h"

using namespace AvZ;

void Script(){
    OpenMultipleEffective();
    SelectCardsPlus({ICE,DOOM,COFFEE,CHERRY,SQUASH,LILY,PUFF,SUN,SUNFLOWER,UMBRELLA_LEAF});
    SetZombiesPlus({SNORKEL,DOLPHIN,JACK,POGO,CATAPULT,GARG,GIGA_GARG},AVERAGE);

    for (auto w: waves(1)){
        C(-599,{LILY,ICE},3,1);
        C(152,{LILY,SUNFLOWER},3,8);
        PP(520,8.4);
    }

    for (auto w: waves(2,11,18)){
        PP(520,8.4);
    }

    for (auto w: waves(3)){
        C(120,until(700),PUFF,2,7);
        C(450,{LILY,DOOM,COFFEE},4,9);
        C(701,SUN,2,7);
    }

    for (auto w: waves(4)){
        C(252,{LILY,SUNFLOWER},4,8);
        PP(535,8.4);
        C(737,COFFEE,3,1);
    }

    for (auto w: waves(5)){
        C(0,PUFF,2,7);
        PP(1240,8.4);
    }

    for (auto w: waves(6)){
        PP(535,8.4);
        C(737,{ICE,COFFEE},3,1);
    }

    for (auto w: waves(7)){
        C(3,SUNFLOWER,3,1);
        PP(1240,8.4);
    }

    for (auto w: waves(8)){
        C(450,{LILY,DOOM,COFFEE},3,9);
    }

    for (auto w: waves(9)){
        PP(520,8.4);
        PP(1184,8);
        P(2635,4,5.6);
        P(2635,5,5.6);
        RM(4800,SUNFLOWER,3,8);
        C(4800,ICE,3,8);
    }

    for (auto w: waves(10)){
        RM(375,SUNFLOWER,3,1);
        C(375,until(395),UMBRELLA_LEAF,3,1);
        C(395,SUNFLOWER,3,1);
        PP(547,8.4);
    }

    for (auto w: waves(12)){
        C(110,until(700),PUFF,2,7);
        RM(247,SUNFLOWER,4,8);
        C(547,{DOOM,COFFEE},4,8);
        C(701,SUN,2,7);
    }

    for (auto w: waves(13)){
        PP(520,8.4);
        C(722,COFFEE,3,8);
    }

    for (auto w: waves(14)){
        C(0,PUFF,2,7);
        PP(1240,8.4);
    }

    for (auto w: waves(15)){
        PP(520,8.4);
        C(722,{ICE,COFFEE},3,8);
    }

    for (auto w: waves(16)){
        PP(1240,8.4);
    }

    for (auto w: waves(17)){
        C(547,{DOOM,COFFEE},3,8);
    }

    for (auto w: waves(19)){
        PP(520,8.4);
        PP(1807,6.5);
        P(3280,4,4);
        P(3280,5,4);
    }

    for (auto w: waves(20)){
        C(2,{ICE,COFFEE},2,3);
        PP(1400,8.4);
    }

}
