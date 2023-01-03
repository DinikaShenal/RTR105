# https://gnuplot.sourceforge.net/demo_5.2/fillcrvs.html
# I used some help from the above website to plot this graph

set terminal png size 1280,941 crop
set output 'integrations.png'
set grid
set title "Integration of Arcsine(x)"
set xlabel "x"
set ylabel "Arcsine(x)"
plot [-2:2] [-3:3] asin(x) lw 2, [-0.5:1] asin(x) with filledcurve y1=0