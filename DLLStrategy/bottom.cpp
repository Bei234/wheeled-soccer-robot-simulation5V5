//���Բ�
#include "data.h"
#include "platform.h"
#include "robotMovement.h"
using namespace Simuro;

//���º���
void Update_data(Simuro::Field* field)
{
	angle_ = field->selfRobots->rotation;

}

/*===============================================================*/
/****************************����������***************************/
void strategy(Simuro::Field* field)
{
	Go_1(field->selfRobots[0], 110.f, 0.f);
}



/****************************����������***************************/
/*===============================================================*/