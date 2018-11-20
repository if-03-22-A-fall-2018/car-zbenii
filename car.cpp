#include "car.h"
#define CARCOUNT 6

struct TestCase{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acc_rate;
  double speed;
  bool is_rented;
};

static struct TestCase multipla1={FIAT_MULTIPLA,GREEN,65.0,0.0,0,false};
static struct TestCase multipla2={FIAT_MULTIPLA,BLUE,65.0,0.0,0,false};
static struct TestCase multipla3={FIAT_MULTIPLA,ORANGE,65.0,0.0,0,false};
static struct TestCase aixam={AIXAM,RED,16.0,0.0,0,false};
static struct TestCase jeep1={JEEP,SILVER,80.0,0.0,0,false};
static struct TestCase jeep2={JEEP,BLACK,80.0,0.0,0,false};

Car car_park[]={&aixam,&multipla1,&multipla2,&multipla3,&jeep1,&jeep2};

enum CarType get_type(Car car)
{
  return car->type;
}

enum Color get_color(Car car)
{
  return car->color;
}

double get_fill_level(Car car)
{
  return car->fill_level;
}

double get_acceleration_rate(Car car)
{
  return car->acc_rate;
}

double get_speed(Car car)
{
  return car->speed;
}

Car get_car(enum CarType type)
{
  for(int i=0;i<CARCOUNT;i++)
  {
    if(car_park[i]->type==type)
    {
      if(car_park[i]->is_rented==false)
      {
        car_park[i]->is_rented=true;
        return car_park[i];
      }
    }
  }

  return 0;
}

void set_acceleration_rate(Car car,double rate)
{
  car->acc_rate=rate;
}

void init()
{
  for(int i=0;i<CARCOUNT;i++)
  {
    car_park[i]->is_rented=false;
  }
}
