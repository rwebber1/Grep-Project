/*
 * Student:	Riley Webber
 * Class:	CPSC 223C
 * Section:	02
 * CWID:	890347164
 * Project:	Grep from ED
 */

#ifndef GREP_H_
#define GREP_H_

#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <glob.h>
#include "grep.h"

#define BLKSIZE  4096
#define NBLK  2047
#define FNSIZE  128
#define LBSIZE  4096
#define GBSIZE  256
#define WRITE  1
#define READ 0

int append(int (*f)(void), unsigned int *a);
void error(char *s);
void exfile(void);
void filename(const char* c);
char *getblock(unsigned int atl, int iof);
int getchr(void);
int getfile(void);
void init(void);
void newline(void);
void nonzero(void);
void print(void);
void putchr_(int ac);
void putd(void);
void putfile(void);
int putline(void);
void puts_(char *sp);
void readfile(const char* c);
void search(const char* re);
void setwide(void);
void squeeze(int);
void setnoaddr(void);

#endif /* GREP_H_ */
