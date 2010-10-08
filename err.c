/*
 * A n t l r  S e t s / E r r o r  F i l e  H e a d e r
 *
 * Generated from: cl.g
 *
 * Terence Parr, Russell Quong, Will Cohen, and Hank Dietz: 1989-2001
 * Parr Research Corporation
 * with Purdue University Electrical Engineering
 * With AHPCRC, University of Minnesota
 * ANTLR Version 1.33MR33
 */

#define ANTLR_VERSION	13333
#include "pcctscfg.h"
#include "pccts_stdio.h"

#include <string>
#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <fstream>

using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include "ptype.hh"
#include "symtab.hh"
#include "codegest.hh"

/// struct to contain information about a token.
typedef struct {
  string kind;
  string text;
  int line;
} Attrib;

/// function called by the scanner when a new token is found
/// Predeclared here, definition below.
void zzcr_attr(Attrib *attr,int type,char *text);

/// Include AST node fields declaration
#include "myASTnode.hh"

/// Macro called by the parser when a new AST node is to be created
/// createASTnode function doing the actual job is defined below.
#define zzcr_ast(as,attr,tttype,textt) as=createASTnode(attr,tttype,textt);
AST* createASTnode(Attrib* attr, int ttype, char *textt);
#define zzSET_SIZE 4
#include "antlr.h"
#include "ast.h"
#include "tokens.h"
#include "dlgdef.h"
#include "err.h"

ANTLRChar *zztokens[29]={
	/* 00 */	"Invalid",
	/* 01 */	"INPUTEND",
	/* 02 */	"PROGRAM",
	/* 03 */	"ENDPROGRAM",
	/* 04 */	"VARS",
	/* 05 */	"ENDVARS",
	/* 06 */	"INT",
	/* 07 */	"STRUCT",
	/* 08 */	"ENDSTRUCT",
	/* 09 */	"WRITELN",
	/* 10 */	"PLUS",
	/* 11 */	"MINUS",
	/* 12 */	"TIMES",
	/* 13 */	"DIV",
	/* 14 */	"OPENPAR",
	/* 15 */	"CLOSEPAR",
	/* 16 */	"ASIG",
	/* 17 */	"DOT",
	/* 18 */	"IDENT",
	/* 19 */	"INTCONST",
	/* 20 */	"COMMENT",
	/* 21 */	"WHITESPACE",
	/* 22 */	"NEWLINE",
	/* 23 */	"LEXICALERROR",
	/* 24 */	"PROCEDURE",
	/* 25 */	"ENDPROCEDURE",
	/* 26 */	"FUNCTION",
	/* 27 */	"ENDFUNCTION",
	/* 28 */	"STRING"
};
SetWordType zzerr1[4] = {0x18,0x2,0x4,0x5};
SetWordType zzerr2[4] = {0x0,0x0,0x0,0x5};
SetWordType zzerr3[4] = {0xc0,0x0,0x0,0x0};
SetWordType setwd1[29] = {0x0,0x1,0x0,0xc6,0x0,0x18,0x0,
	0x0,0x0,0xc6,0x0,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0xd6,0x0,0x0,0x0,0x0,
	0x0,0xa6,0x0,0xa6,0x0,0x0};
SetWordType zzerr4[4] = {0x0,0x40,0xc,0x10};
SetWordType zzerr5[4] = {0x0,0x2,0x4,0x0};
SetWordType zzerr6[4] = {0x0,0xc,0x0,0x0};
SetWordType setwd2[29] = {0x0,0x0,0x0,0xa8,0x0,0x1,0x0,
	0x0,0x3,0xa4,0x40,0x40,0x0,0x0,0x10,
	0x80,0x0,0x0,0xb7,0x10,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0};
SetWordType zzerr7[4] = {0x0,0x30,0x0,0x0};
SetWordType zzerr8[4] = {0x0,0x40,0xc,0x0};
SetWordType setwd3[29] = {0x0,0x0,0x0,0x6,0x0,0x0,0x0,
	0x0,0x0,0x6,0x6,0x6,0x5,0x5,0x0,
	0x6,0x0,0x0,0x6,0x0,0x0,0x0,0x0,
	0x0,0x0,0x0,0x0,0x0,0x0};
