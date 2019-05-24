/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Task.h
 * Author: kelvin
 *
 * Created on May 23, 2019, 8:01 PM
 */

#ifndef TASK_H
#define TASK_H

class Task
{
    public:
        void *start(void *vargp);
        static void *start_helper(void *vargp) {
            return ((Task *) vargp)->start(vargp);
        }
};

#endif /* TASK_H */
