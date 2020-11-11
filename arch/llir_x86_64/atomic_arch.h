#define a_cas a_cas
static inline int a_cas(volatile int *p, int t, int s)
{
	__asm__ __volatile__
		( "x86_cmpxchg.i32  %0, %1, %3, %2"
		: "=r"(t)
		: "r"(p), "r"(t), "r"(s)
		: "memory"
		);
	return t;
}

#define a_cas_p a_cas_p
static inline void *a_cas_p(volatile void *p, void *t, void *s)
{
	__asm__
		( "x86_cmpxchg.i64  %0, %1, %3, %2"
		: "=r"(t)
		: "r"(p), "r"(t), "r"(s)
		: "memory"
		);
	return t;
}

#define a_swap a_swap
static inline int a_swap(volatile int *p, int v)
{
	__asm__ __volatile__
		( "x86_xchg.i32 %0, %1, %2"
		: "=r"(v)
		: "r"(p), "r"(v)
		: "memory"
		);
	return v;
}

#ifndef a_crash
#define a_crash a_crash
static inline void a_crash()
{
	__asm__ __volatile__ ( "trap" : : : "memory" );
}
#endif