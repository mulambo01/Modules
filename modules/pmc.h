#include "matrix.h"

long double sigm(long double u);
long double sigm2(long double u);
long double func(long double u, int ftype);
long double func2(long double u, int ftype);
mtx **createneurons(int *qtneurons, int qtlayers, int qtinput);
long double neuronthink(mtx x, mtx w);
long double neuronansw(long double input, int ftype);
mtx layerthink(mtx x, mtx *w, int qtneurons);
mtx layeransw(mtx input, int ftype);
mtx netthink(mtx x, mtx **w, int *qtneurons, int qtlayers, int ftype);
mtx netansw(mtx x, mtx **w, int *qtneurons, int qtlayers, int ftype);
void fitbydelta(mtx **w, mtx *input, mtx x, mtx *y, mtx d, int qtlayers, long double lrn, int ftype);
mtx adjust(mtx x, mtx d, mtx **w, int *qtneurons, int qtlayers, long double lrn, int ftype);
long double meansqrerr(mtx samples, mtx d, mtx **w, int *qtneurons, int qtlayers, int ftype);
void savelayer(char *filename, mtx *w, int qtneurons);
void savenet(char *dirname, char *fileprefix, mtx **w, int *qtneurons, int qtlayers);
mtx* loadlayer(char *filename, int qtneurons, int qtw);
mtx** loadnet(char *dirname, char *fileprefix, int *qtneurons, int qtlayers, int qtinput);

