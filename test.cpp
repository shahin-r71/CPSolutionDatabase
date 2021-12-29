#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  freopen("billboard.in","r",stdin);
  freopen("billboard.out","w",stdout);

  int lb_x_a,lb_y_a,rt_x_a,rt_y_a;
  int lb_x_b,lb_y_b,rt_x_b,rt_y_b;
  int lb_x_c,lb_y_c,rt_x_c,rt_y_c;
  int area_a, area_b, total;
  int intersection_a_c, intersection_b_c;

  cin >> lb_x_a >> lb_y_a >> rt_x_a >> rt_y_a;
  cin >> lb_x_b >> lb_y_b >> rt_x_b >> rt_y_b;
  cin >> lb_x_c >> lb_y_c >> rt_x_c >> rt_y_c;

  area_a = (rt_x_a - lb_x_a) * (rt_y_a - lb_y_a);
  area_b = (rt_x_b - lb_x_b) * (rt_y_b - lb_y_b);
  // for first and third rectangle
  if(lb_x_a>=rt_x_c|| lb_x_c>=rt_x_a||rt_y_c<=lb_y_a||rt_y_a<=lb_y_c){
    intersection_a_c = 0;
  }else{
    intersection_a_c = (min(rt_y_a, rt_y_c) - max(lb_y_a, lb_y_c)) * (min(rt_x_a, rt_x_c) - max(lb_x_a, lb_x_c));
  }


  // for second and third rectangle
  if(lb_x_b>=rt_x_c|| lb_x_c>=rt_x_b||rt_y_c<=lb_y_b||rt_y_b<=lb_y_c){
    intersection_b_c = 0;
  }else{
    intersection_b_c=(min(rt_y_b, rt_y_c) - max(lb_y_b, lb_y_c)) * (min(rt_x_b, rt_x_c) - max(lb_x_b, lb_x_c));
  }

  total = area_a + area_b - intersection_a_c - intersection_b_c;
  cout << total << "\n";
  return 0;
}