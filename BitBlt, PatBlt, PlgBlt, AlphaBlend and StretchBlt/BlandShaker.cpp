// BlandShaker.cpp : Este arquivo contém as funções "principais". É aqui que começa e termina a execução do programa.
//

#include <windows.h> // Windows API
#define NOTSRCINVERT 0x0089200C9ul // The define for NOTSRCINVERT

int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1); // I like to put these stuff in global variables

int main() 
{
	  HDC hdc; // Handle for device context
		while (1) { // Loop thing
		hdc = GetDC(NULL); // Gets the device context
	  BitBlt(hdc, rand () % 5, rand () % 8, sw, sh, hdc, rand () % 10, rand () % 25, NOTSRCINVERT); // BitBlt 
		ReleaseDC(NULL, hdc); // Releases the device context
		Sleep(10); // Sleep thingy
	}
}

//Executa o programa: Ctrl + F5 ou Debug > menu Iniciar sem depuração
// Programa de depuração: F5 ou Debug > menu Iniciar depuração

// Dicas para começar: 
// 1. Use a janela Solution Explorer para adicionar/gerenciar arquivos
// 2. Use a janela Team Explorer para conectar-se ao controle de origem
// 3. Use a janela Saída para ver a saída da compilação e outras mensagens
// 4. Use a janela Lista de erros para visualizar os erros
// 5. Vá para Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
// 6. Futuramente, para abrir este projeto novamente, vá em Arquivo > Abrir > Projeto e selecione o arquivo .sln
