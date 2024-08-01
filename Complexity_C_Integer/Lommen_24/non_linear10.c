extern int __VERIFIER_nondet_int(void);

int non_linear10(int x1, int x2) {
  if(__VERIFIER_nondet_int()) {
    while(x2 < x1 && x2 > 0) {
      x1 = 2*x1;
      x2 = 3*x2;
    }
  } else {
    while(x2 < x1 && x2 > 0) {
      x1 = 2*x1;
      x2 = 4*x2;
    }
  }
  return 0;
}
