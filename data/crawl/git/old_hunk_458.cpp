SHA1_RECOMPRESS(79)
#endif

static void sha1_recompression_step(uint32_t step, uint32_t ihvin[5], uint32_t ihvout[5], const uint32_t me2[80], const uint32_t state[5])
{
	switch (step)