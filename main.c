#include <stdio.h>
#include <locale.h>

int main() {
    double salario;
    double parcelaEmprestimo;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite o valor do salário\n");
    scanf("%lf", &salario);
    wprintf(L"Informe o valor da parcela do empréstimo\n");
    scanf("%lf", &parcelaEmprestimo);
    if(parcelaEmprestimo <= salario*0.2){
        wprintf(L"Empréstimo concedido.");
    }else{
        wprintf(L"Empréstimo negado");
    }
    return 0;
}