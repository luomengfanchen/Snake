all:SnakeGame

SnakeGame:
	gcc -o ./bin/SnakeGame.exe -fexec-charset=gbk -I ./Header/ ./Source/*

M32:
	gcc -o ./bin/SnakeGame_M32.exe -fexec-charset=gbk -m32 -I ./Header/ ./Source/*

M64:
	gcc -o ./bin/SnakeGame_M64.exe -fexec-charset=gbk -m64 -I ./Header/ ./Source/*

clean:
	rm ./bin/SnakeGame.exe
	rm ./bin/SnakeGame_M32.exe
	rm ./bin/SnakeGame_M64.exe
