WebAssembly (wasm) emscripten transpiler
=========================================

emscripten transpiler
----------------------

emscripten transpiler docs
        https://emscripten.org/docs/getting_started/downloads.html

Tutorial
------------

https://marcoselvatici.github.io/WASM_tutorial/


code::  

    C ==> [ emscripten]. ===> *.js *.wasm *.html


    emcc -O1 -s ASM_JS=1 ./fib.c
    node a.out.js
    clang fib.c 


    time ./a.out
    time node a.out.js


    emcc fib.c -o fib.html -s WASM=1
        fib.c:      c program text, ASCII text
        fib.html:   HTML document text, ASCII text, with very long lines
        fib.js:     ASCII text, with very long lines
        fib.wasm:   WebAssembly (wasm) binary module version 0x1 (MVP)

main.html
----------

code::

    <html>
    <body>
            <script src="fib.js"></script>
            <p>Open the console to see the result!</p>
    </body>
    </html>


Web SimpleHTTPServer
---------------------------
code::

    python -m SimpleHTTPServer 9000


fib.c 
-----------

code::
    #include <stdio.h>
    
    int fib(int x) {
    if (x < 2) {
        return 1;
    } else {
        return fib(x - 1) + fib(x - 2);
    }
    }
    
    int main() {
    int result = fib(4);
    
    printf("Result of 4th fib: %d\n", result);
    return 1;
    }
    