/*
 * Shooter.cpp

 *
 *  Created on: Sep 23, 2016
 *      Author: Lisa Sun
 */

#include <iostream>
using namespace std;

#include "motor.h"
#include "Shooter.h"

Shooter :: Shooter(int leftPort, int rightPort)
	:*leftMotor(leftPort), *rightMotor(rightPort)
{
}


void Shooter :: ShootBall()
{
	*leftMotor->setSpeed(0.8) ;
	*rightMotor->setSpeed(0.8);
        *leftMotor->wait(600) ;
	*rightMotor->wait(600);
        *leftMotor->setSpeed(0) ;
	*rightMotor->setSpeed(0);
        
        

}

Shooter :: ~Shooter()
{
      delete *leftMotor;
      delete *rightMotor;
}



