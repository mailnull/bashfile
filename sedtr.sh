#!/bin/bash
sed -e ':t;N;s/\n/,/;b t' 
#sed -e 's/.$//g' $1 >$2
cat $2

