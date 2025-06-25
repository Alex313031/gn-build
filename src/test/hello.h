#ifndef HELLO_H_
#define HELLO_H_

#ifdef _CONSOLE // Test to make sure we compiled this as a console app
 #include "hello_shared.h"
#endif  // _CONSOLE

int main(int argc, char *argv[], char *envp[]);

#endif  // HELLO_H_
