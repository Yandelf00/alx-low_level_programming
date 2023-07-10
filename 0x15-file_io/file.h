#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

void closefile(int fil);
void Cfilele(unsigned char *rem);
void Prntmgic(unsigned char *magic);
void Prntclss(unsigned char *class);
void Prntdta(unsigned char *data);
void Prnvrsion(unsigned char *version);
void prosabi(unsigned char *o_a);
void abii(unsigned char *abi);


#endif
