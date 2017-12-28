#pragma once
#include < iostream >
using namespace std;

#ifndef PID_h
#define PID_h

template <class xtype>
struct node {

   node * next;
   int id;
   bool used = false;// determin if the current id is in use at a specific time
   unsigned char * b = NULL;
};

template <class xtype>
class Pid {

public:

   Pid();// Constractor
   ~Pid();// Distractor

   int allocate_map();
   int allocate_pid();
   void release_pid(int pid);
   void display();

private:

   node<xtype> * head;
   int id_Counter; 
};
#endif