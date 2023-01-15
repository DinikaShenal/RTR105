set terminal png size 1280,940 crop
set output 'statistics_histogram.png'
set yrange [0:*]
set title "Character Count Histogram"
set xlabel "Character"
set ylabel "Count"
set style fill solid border -1

#set the input file
data = "statistics.txt"

#plotting the histogram
plot data using 2:xtic(1) with boxes notitle