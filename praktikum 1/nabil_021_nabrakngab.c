#include<stdio.h>
int X1, X2, X3, X4, Y1, Y2, Y3, Y4, m1, m2, xmax, ymax, xmin, ymin;
// int test = 727;
int main(){
  //scanf("%d %d %d %d\n%d %d %d %d", &X1, &Y1, &X2, &Y2, &X3, &Y3, &X4, &Y4);
  scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
  scanf("%d %d %d %d", &X3, &Y3, &X4, &Y4);
  // printf("%d %d %d %d\n%d %d %d %d\n", X1, Y1, X2, Y2, X3, Y3, X4, Y4);
  
  int ree1 = (Y2-Y1)*(X3-X2) - (X2-X1)*(Y3-Y2); //abc 123
  int ree2 = (Y2-Y1)*(X4-X2) - (X2-X1)*(Y4-Y2); //abd 124
  int ree3 = (Y4-Y3)*(X1-X4) - (X4-X3)*(X1-X4); //cda 341
  int ree4 = (Y4-Y3)*(X2-X4) - (X4-X3)*(X2-X4); //cdb 342
  
  xmax = (X1 > X3) ? X1 : X3;
  xmin = (X1 < X3) ? X1 : X3;
  ymax = (Y1 > Y3) ? Y1 : Y3;
  ymin = (Y1 < Y3) ? Y1 : Y3;
  
  //teuing

  if (ree1 != ree2 && ree3 != ree4){
    printf("awas nabrak");
  } else if (ree1 == 0 && X2 <= xmax && X2 >= xmin && Y2 <= ymax && Y2 >= ymin){
    printf("awas nabrak");
  } else {
    printf("gaspol bangg");
  }
  
}
