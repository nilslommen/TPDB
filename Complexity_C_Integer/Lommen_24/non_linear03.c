int non_linear03(int x1, int x2, int x3, int x4, int y1, int y2) {
  while(x4^2 - x3^5 < 2*y1 - y2 && x4 != 0) {
    int x1_ = x1;
    int x2_ = x2;
    x1 = 3*x1_ + 2*x2_;
    x2 = -5*x1_ -3*x2_;
    x4 = -2*x4;
    int y1_ = y1;
    int y2_ = y2;
    y1 = y1_ + y1_^2 + x3^2;
    y2 = -4*y1 + 2*y1^2 + 3*y2 + x3^2;
  }
  return 0;
}
