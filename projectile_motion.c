#include <stdio.h>
#include <math.h>

int main() {
  double vnot, g, t, theta, vx, vy;

  // Input values for vnot, g, t, and theta
  printf("Enter value for vnot: ");
  scanf("%lf", &vnot);
  printf("Enter value for g: ");
  scanf("%lf", &g);
  printf("Enter value for theta (in degrees): ");
  scanf("%lf", &theta);

  theta = theta * M_PI / 180;   // Converting theta  to radians

  double Xmax = 2 * pow(vnot, 2) / g * sin(theta) * cos(theta);   // Calculating the value of  Xmax

  double Ymax = pow(vnot, 2) / (2 * g) * pow(sin(theta), 2);  // Calculate Ymax

  // Input value for t
  printf("Enter value for t: ");
  scanf("%lf", &t);

  // Calculate X
  double X = vnot * t * cos(theta);

  double Y = vnot * t * sin(theta) - 0.5 * g * pow(t, 2);   // Calculate Y

  double Txmax = 2 * vnot / g * sin(theta);   // Calculate Txmax

  // Calculate vx and vy
  vx = vnot * cos(theta);
  vy = vnot * sin(theta) - g * t;

  double V = sqrt(pow(vx, 2) + pow(vy, 2));  // Calculate V
  
  theta = atan(vx / vy); // Calculate theta

  theta = theta * 180 / M_PI; // Converting  from radians to degrees


  // Display of each calculation.
  printf("Xmax = %lf\n", Xmax);
  printf("Ymax = %lf\n", Ymax);
  printf("X = %lf\n", X);
  printf("Y = %lf\n", Y);
  printf("Txmax = %lf\n", Txmax);
  printf("V = %lf\n", V);
  printf("Theta = %lf degrees\n", theta);

  return 0;
}
