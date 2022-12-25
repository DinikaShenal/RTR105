set terminal png size 700,700
set output 'derivatives.png' 

set key inside bottom right
set xlabel 'x'
set ylabel 'f(x), f^,(x)_a, f^,(x)_d, f^,^,(x)_a, f^,^,(x)_d'
set title '1st and 2nd Derivatives'
set grid
plot "derivatives.txt" using 1:2 title 'asin(x)' with lines lw 3, "derivatives.txt" using 1:3 title 'asin^,(x)_a' with lines lw 3, "derivatives.txt" using 1:4 title 'asin^,(x)_d' with lines lw 3, "derivatives.txt" using 1:5 title 'asin^,^,(x)_a' with lines lw 3, "derivatives.txt" using 1:6 title 'asin^,^,(x)_d' with lines lw 3
