#define __SYSCALL_LL_E(x) \
((union { long long ll; long l[2]; }){ .ll = x }).l[0], \
((union { long long ll; long l[2]; }){ .ll = x }).l[1]
#define __SYSCALL_LL_O(x) __SYSCALL_LL_E((x))

static __inline long __syscall0(long n)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1"
		: "=r"(ret)
		: "r"(n)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall1(long n, long a1)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2"
		: "=r"(ret)
		: "r"(n), "r"(a1)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall2(long n, long a1, long a2)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2, %3"
		: "=r"(ret)
		: "r"(n), "r"(a1), "r"(a2)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall3(long n, long a1, long a2, long a3)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2, %3, %4"
		: "=r"(ret)
		: "r"(n), "r"(a1), "r"(a2), "r"(a3)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall4(long n, long a1, long a2, long a3, long a4)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2, %3, %4, %5"
		: "=r"(ret)
		: "r"(n), "r"(a1), "r"(a2), "r"(a3), "r"(a4)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall5(long n, long a1, long a2, long a3, long a4, long a5)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2, %3, %4, %5, %6"
		: "=r"(ret)
		: "r"(n), "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5)
	  : "memory"
	  );
	return ret;
}

static __inline long __syscall6(long n, long a1, long a2, long a3, long a4, long a5, long a6)
{
	unsigned long ret;
	__asm__ __volatile__
		( "syscall.i32 %0, %1, %2, %3, %4, %5, %6, %7"
		: "=r"(ret)
		: "r"(n), "r"(a1), "r"(a2), "r"(a3), "r"(a4), "r"(a5), "r"(a6)
	  : "memory"
	  );
	return ret;
}

#define VDSO_USEFUL
#define VDSO_CGT32_SYM "__vdso_clock_gettime"
#define VDSO_CGT32_VER "LINUX_2.6"
#define VDSO_CGT_SYM "__vdso_clock_gettime64"
#define VDSO_CGT_VER "LINUX_2.6"
