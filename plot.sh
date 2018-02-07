#!/bin/sh

gnuplot -p -e "
set yrange [-1:1]; 
plot 'output.txt' using 1 lc -1 title 'Signal' with lines,
	 'output.txt' using 2 lc -1 title 'Vote',
	'output.txt' using 3 lc -1 title 'Error' with lines;
" 
