//
//  auto_functions.c
//  FiniteStateMachine
//
//  Created by Donald Pinckney on 12/24/15.
//  Copyright © 2015 Donald Pinckney. All rights reserved.
//

#include "auto_functions.h"

bool DeployChokehold() {
    
    printf("BANG! Chokehold has been deployed!\n");
    
    // Code here to deploy mechanism
    
    return true;
    
}


int currentDistance = 0;
bool DriveStraight_3(float speed, int distance, bool left) {
    
    
    printf("DriveStraight_3: Driving kinda straight, with speed = %f, distance = %d, left = %d?\n", speed, distance, left);
    
    
    // Simulate driving here
    currentDistance += 10; // in.
    
    if(currentDistance > distance) {
        currentDistance = 0;
        return true;
    }
    
    return false;
}

bool DriveStraight_2(float speed, int distance) {
    
    printf("DriveStraight_2: Driving kinda straight, with speed = %f, distance = %d?\n", speed, distance);
    
    
    // Simulate driving here
    currentDistance += 10; // in.
    
    if(currentDistance > distance) {
        currentDistance = 0;
        return true;
    }
    
    return false;
}

bool DriveStraight_4(float speed, float distance) {
    
    printf("DriveStraight_4: Driving kinda straight, with speed = %f, distance = %f?\n", speed, distance);
    
    
    // Simulate driving here
    currentDistance += 10; // in.
    
    if(currentDistance > distance) {
        currentDistance = 0;
        return true;
    }
    
    return false;
}

bool CalibrateElevator() {
    printf("Calibrating elevator...\n");
    
    return true;
}

bool StopElevator() {
    printf("Elevator STOP\n");
    return true;
}
bool StopDriving() {
    printf("Driving STOP\n");
    return true;
}

bool RaiseWings() {
    printf("Raising wings\n");
    return true;
}