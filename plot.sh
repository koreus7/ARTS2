#!/bin/sh

gnuplot -p -e "
set yrange [-2:2]; 
plot 'output.txt' using 1 lc rgb 'green' title 'Signal' with lines,
	'output.txt' using 2 lc -1 title 'Vote',
	'output.txt' using 3 lc rgb 'red' title 'Error' with lines,
	'output.txt' using 4 lc rgb 'blue' title 'Adjusted Average',
	'output.txt' using 5 lc rgb 'orange' title 'MaxError';
" 


