all: html

distclean: clean
clean:
	rm -f *.png *.gnu *.html *.dat epslatex* fit.log soundfit.par *.tmp *.js *.?.svg *.??.svg jsdir

GNUPLOT_LIB = ..

#
# Auto-generation of the html demo set using the png terminal.
#
# Several of the demos need manual intervention:
#	fontfile vector epslatex
#
html: airfoil.html approximate.html arrowstyle.html barchart_art.html binary.html bivariat.html boxplot.html candlesticks.html circles.html cities.html contours.html controls.html datastrings.html dgrid3d.html discrete.html electron.html ellipse.html enhanced_utf8.html epslatex.html fillbetween.html fillcrvs.html fillstyle.html finance.html fit.html hidden.html hidden2.html histograms.html histograms2.html image.html image2.html index.html iterate.html key.html layout.html margins.html mgr.html multiaxis.html multimsh.html multiplt.html param.html pm3dcolors.html pm3d.html pm3dgamma.html pointsize.html polar.html poldat.html prob2.html prob.html rainbow.html random.html rectangle.html rgbalpha.html rgb_variable.html running_avg.html scatter.html simple.html singulr.html smooth.html spline.html steps.html stringvar.html surface1.html surface2.html transparent.html transparent_solids.html textcolor.html textrotate.html tics.html timedat.html using.html vector.html world.html world2.html dashcolor.html animate2.html heatmaps.html stats.html

index.html: index.save
	cp index.save index.html

circles.html: $(GNUPLOT_LIB)/hidden2.dem ./webify.pl
	export DEMOTERM="pngcairo truecolor font 'arial,8' size 500,300"; ./webify.pl circles

cities.html: $(GNUPLOT_LIB)/cities.dem ./webify.pl
	export DEMOTERM="png font 'Times,8' fontscale 2.5 size 500,500"; ./webify.pl cities

ellipse.html: random.html

hidden2.html: $(GNUPLOT_LIB)/hidden2.dem ./webify.pl
	export DEMOTERM="png truecolor font 'arial,8' size 450,320"; ./webify.pl hidden2

image.html: $(GNUPLOT_LIB)/image.dem ./webify.pl
	export DEMOTERM="png truecolor font 'arial,8' size 450,320"; ./webify.pl image

image2.html: $(GNUPLOT_LIB)/image2.dem ./webify.pl
	export DEMOTERM="png truecolor font 'arial,8' size 450,320"; ./webify.pl image2

rgbalpha.html: $(GNUPLOT_LIB)/rgbalpha.dem ./webify.pl
	export DEMOTERM="png truecolor font 'arial,8' size 450,300"; ./webify.pl rgbalpha

finance.html: $(GNUPLOT_LIB)/finance.dem ./webify.pl
	export DEMOTERM="png enhanced transparent font 'arial,8' size 660,320"; ./webify.pl finance

multiplt.html: $(GNUPLOT_LIB)/multiplt.dem ./webify.pl
	export DEMOTERM="png enhanced transparent font 'arial,8' size 610,480"; ./webify.pl multiplt

transparent.html: $(GNUPLOT_LIB)/transparent.dem ./webify.pl
	export DEMOTERM="png enhanced transparent truecolor font 'arial,8' size 512,280"; ./webify.pl transparent

transparent_solids.html: $(GNUPLOT_LIB)/transparent_solids.dem ./webify.pl
	export DEMOTERM="png enhanced truecolor font 'arial,9' size 512,384"; ./webify.pl transparent_solids

# The png terminal does not support dashed lines, so let's use pngcairo
dashcolor.html: $(GNUPLOT_LIB)/dashcolor.dem ./webify.pl
	export DEMOTERM="pngcairo dash"; ./webify.pl dashcolor

animate2.html: $(GNUPLOT_LIB)/animate2.dem ./webify.pl
	export DEMOTERM="gif animate transparent noopt delay 10 size 200,200 background rgb 'black'"; ./webify.pl animate2
	mv animate2.html temp.html
	cat temp.html | sed -e 's/1.png/1.gif/g' > animate2.html
	mv animate2.1.png animate2.1.gif
	rm temp.html


%.html: $(GNUPLOT_LIB)/%.dem ./webify.pl
	./webify.pl $*

