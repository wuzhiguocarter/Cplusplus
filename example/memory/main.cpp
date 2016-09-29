//#include "main.h"
// unsigned char bss_array[1024*1024]; // 1M的空间被分配到.bss
/*
$ size ./main
	text	   data	    bss	    dec	    hex	filename
	1115	    552	1048608	1050275	 1006a3	./main

$ ls -l main
	-rwxrwxr-x 1 wuzhiguo wuzhiguo 8504 Sep 17 16:14 main

bss_array占用1M的内存, 而可执行程序才8KB左右.可见bss_array
只占用运行时的内存空间,而不占用可执行文件自身的文件空间.

*/

// unsigned char data_array[1024*1024] = {1}; // 1M的空间被分配到.data
/*
$ size ./main
   text	   data	    bss	    dec	    hex	filename
   1115	1049144	      8	1050267	 10069b	./main

$ ls -l main
	-rwxrwxr-x 1 wuzhiguo wuzhiguo 1057120 Sep 17 16:20 main

data_array占用1M的内存, 而可执行程序才1M左右.可见初始化为非0的变量
既占用程序的空间也占用运行时的内存空间.

*/

// const char* const_array = ... in main.h // 5MB
/*
   text	   data	    bss	    dec	    hex	filename
   6120	    560	      8	   6688	   1a20	./main

-rwxrwxr-x 1 wuzhiguo wuzhiguo 12610 Sep 17 17:00 main

text_array分配内存在.text区

*/

//const unsigned char num[1024*1024*50] = {255};// 50M .text segment
const unsigned char num[1024*1024*50] = {0};// 50M .text segment

int main()
{	
	// static char array[1024*1024] = {1}; 
/*
   text	   data	    bss	    dec	    hex	filename
   1115	1049144	      8	1050267	 10069b	./main
   array 内存分配到.data区

*/
	// static char bss_array[1024*1024] = {0}; 
	// or static char array[1024*1024]; 
/*
   text	   data	    bss	    dec	    hex	filename
   1115	    552	1048608	1050275	 1006a3	./main
   array 内存分配到 .bss 区

*/
	while(1);
	return 0;
}
