set term wxt
set title "arctan(x)" font ",20"
set key left box
set samples 50
set style data points

plot [-30:30] atan(x) 
