#include "car.h"

struct TestCase{
  enum CarType type;
  enum Color color;
  double fill_level;
  double acc_rate;
  double speed;
};

struct TestCase multipla1={FIAT_MULTIPLA,GREEN,65.0,0.0,0};
struct TestCase multipla2={FIAT_MULTIPLA,BLUE,65.0,0.0,0};
struct TestCase multipla3={FIAT_MULTIPLA,ORANGE,65.0,0.0,0};
struct TestCase aixam={AIXAM,RED,16.0,0.0,0};
struct TestCase jeep1={JEEP,SILVER,80.0,0.0,0};
struct TestCase jeep2={JEEP,BLACK,80.0,0.0,0};

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
  return 0;
}

void set_acceleration_rate(Car car,double rate)
{

}

void init()
{

}
