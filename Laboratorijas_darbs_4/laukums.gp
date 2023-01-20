
set yrange[-5:5]
set isosample 100,100
set xlabel "x"
set ylabel "y"
set title "Aizkrāsotais laukums starp f(x) un x asi starp a un b"
set style fill transparent solid 0.5


plot atan(x) with lines lw 2, x<atan(x) ? atan(x) : 1/0 with filledcurves x1
