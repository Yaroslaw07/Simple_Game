#include "Enemy.h"
#include <iostream>

Enemy::Enemy(Coordinate location, int lives = 3):Object(3,location, lives, Route::DOWN){}

void Enemy::EnemyLogic(Storage& NewDraw)
{

}