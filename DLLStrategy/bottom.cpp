//策略层
#include "data.h"
#include "platform.h"
#include "robotMovement.h"
using namespace Simuro;

//更新函数
void Update_data(Simuro::Field* field)
{
	angle_ = field->selfRobots->rotation;

}

/*===============================================================*/
/****************************方法定义区***************************/
void strategy(Simuro::Field* field)
{
	Go_1(field->selfRobots[0], 110.f, 0.f);
}



/****************************方法定义区***************************/
/*===============================================================*/