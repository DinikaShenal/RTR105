set terminal png size 700,700
set output 'arcsine.png' 

set key inside bottom right
set xlabel 'x'
set ylabel 'y'
set title 'arcsine function'
set grid
s0(x) = x
s1(x) = s0(x) * ((((2*1)-1)**2) * (x**2)) / ((2*1) * ((2*1)+1))
s2(x) = s1(x) * ((((2*2)-1)**2) * (x**2)) / ((2*2) * ((2*2)+1))
s3(x) = s2(x) * ((((2*3)-1)**2) * (x**2)) / ((2*3) * ((2*3)+1))
plot [-5:5] [-5:5] asin(x) lw 5, s0(x) lw 5, s1(x) lw 5, s2(x) lw 5, s3(x) lw 5
