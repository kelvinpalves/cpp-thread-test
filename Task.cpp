/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Task.cpp
 * Author: kelvin
 * 
 * Created on May 23, 2019, 8:01 PM
 */

#include <stdio.h>
#include <unistd.h>
#include "Task.h"

void * Task::start(void * vargp) {
    int *id = (int*) vargp;
    
    printf("Start Task - ID(%d)\n", id);
    
    while (true) {
        printf("Executing task %d\n", id);
        sleep(5);
    }
}