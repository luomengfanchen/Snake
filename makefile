all:SnakeGame

SnakeGame:
	gcc -o ./SnakeGame.exe -fexec-charset=gbk -I ./Header/ ./Source/*

SnakeGame_M32:
	gcc -o ./SnakeGame_M32.exe -fexec-charset=gbk -m32 -I ./Header/ ./Source/*

SnakeGame_M64:
	gcc -o ./SnakeGame_M64.exe -fexec-charset=gbk -m64 -I ./Header/ ./Source/*
