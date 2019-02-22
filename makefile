main: quant_review.tex forward_measure.tex HJM_LMM.tex coding_basics.tex mystyle.sty lc_review.pdf
	pdflatex quant_review.tex
	rm *~

lc_review.pdf: $(wildcard chapter_*.tex) lc_review.tex
	pdflatex lc_review.tex
	rm *~
