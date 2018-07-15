#include <stdio.h>
#include <stdlib.h>
#include "../modules/pmc.h"

void main(){
 mtx **w, input, y;
 int *qtneurons, qtlayers, qtinput, ftype;
 ftype=0;
 qtinput=5;
 qtlayers=2;
 qtneurons=(int *)malloc(qtlayers*sizeof(int));
 qtneurons[0]=10;
 qtneurons[1]=3;
 w=loadnet("layers", "layer", qtneurons, qtlayers, qtinput-1);
draw(w[0][3]);
draw(w[1][1]);

 input=nullmatrix(1,qtinput);
 input.data[0][0]=-1.0;
 for(int i=1; i<input.ncols; i++){
  scanf("%Lf", &input.data[0][i]);
 }

mtx d;
d=nullmatrix(1,3);

 y=netthink(input, w, qtneurons, qtlayers, ftype);
 draw(y);
}
