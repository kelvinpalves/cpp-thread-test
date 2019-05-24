/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kelvin
 *
 * Created on May 23, 2019, 8:01 PM
 */

#include <cstdlib>
#include <signal.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

#include "Task.h"

using namespace std;

int main(int argc, char** argv) {
    pthread_t thread1, thread2;
    
    Task t1, t2;
    
    int id_1 = 1000, id_2 = 2000;
    
    if (pthread_create(&thread1, NULL, t1.start_helper, (void *) id_1))
        printf("Erro ao criar a thread 01");
           
    if (pthread_create(&thread1, NULL, t2.start_helper, (void *) id_2))
        printf("Erro ao criar a thread 02");
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return EXIT_SUCCESS;
}

