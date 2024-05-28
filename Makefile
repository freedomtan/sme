CC=clang-18
CFLAGS = -mcpu=cortex-x2+sme2+sme-f64f64+b16b16+sme-f16f16+sme2p1 -I. -static

test_features: test_features.c check_support.c kernels.s
	$(CC) $(CFLAGS) -o $@ $?
