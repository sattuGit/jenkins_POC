#!/bin/sh
#rm a.out POC
#g++ -o POC linklist.cpp ./list/src/linkLoop.cpp ./list/src/linkLoop.h ./list/src/singleLinkList.cpp ./list/src/singleLinkList.h
cd Default
make
return $1
