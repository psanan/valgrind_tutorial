PDFS = valgrind_tutorial.pdf

PDFLATEX=pdflatex  --halt-on-error
BIBTEX=bibtex

all : $(PDFS)

%.pdf : %.tex
	$(PDFLATEX) $<
	$(PDFLATEX) $<

clean : 
	rm -f *.aux *.log *.bbl *.blg *-blx.bib *.nav *.snm *.toc *.vrb *.run.xml *.out
	rm -f $(PDFS)

.PHONY : all clean 
