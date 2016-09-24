/*
 * SHOOTER.h
 *
 *  Created on: Sep 23, 2016
 *      Author: Lisa Sun
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_

class Shooter
{
public:
	Shooter (int, int);
	void ShootBall();
        ~Shooter()
        
private:
	Motor *leftMotor;
	Motor *rightMotor;

};



#endif /* SHOOTER_H_ */
