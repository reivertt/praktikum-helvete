//nt adalah saya
#include<stdio.h>
#include<assert.h>

int main(){
  long long x1, x2, x3, y1, y2, y3, xc, yc, area;
  //scanf("[%lld,%lld] | [%lld,%lld] | [%lld,%lld]", &x1, &y1, &x2, &y2, &x3, &y3);
  scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3); //buat tes input 
  xc = (x1 + x2 + x3)/3; yc = (y1 + y2 + y3)/3;
  area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
  assert(x1 >= 0 && x1<= 1000000000); //
  if (x1 >= 0 && x2 >= 0 && x3 >= 0 && x1 <= 1000000000 && x2 <= 1000000000 && x3 <= 1000000000){ 
    if (((x1 == x2) && (y1 == y2)) || ((x2 == x3) && (y2 == y3)) || ((x1 == x3) && (y1 == y3))){
      printf("Henshin! Entry.");
    } else {
      if (area == 0){
        if (xc % 2 != 0 && yc % 2 != 0){
          printf("Boost Raise Buckle Acquired at Coordinate [%lld,%lld]\nHenshin! Boost, Ready, Fight!", xc, yc);
        } else {
          printf("Henshin! Entry.");
        }
      } else {
        if (xc % 2 == 0 && yc % 2 == 0){
          printf("Magnum Raise Buckle Acquired at Coordinate [%lld,%lld]\nHenshin! Magnum, Ready, Fight!", xc, yc);
        } else {
          printf("Henshin! Entry.");
        }
      }
    }
  }
}
