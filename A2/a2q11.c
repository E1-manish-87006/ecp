/***Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on ␁␂␃␂␄␃␅␆, ␁␇␂␄␃␅␆, ␈ ␅ ␅ .****/

#include<stdio.h>
void main(){
float x,y;
scanf("%f%f",&x,&y);
if(x>0 && y>0){
printf("point belongs to first quadrant");}
else if(x<0 && y<0){
printf("point belongs to third  quadrant");}
else if(x>0 && y<0){
printf("point belongs to fourth quadrant");}
else if(x<0 && y>0){
printf("point belongs to second  quadrant");}
else{
printf("point is origin");}
}

