int rotate_right(int n, int nbits) {

	return (n >> nbits)|(n << (32 - nbits));
}
