//Em java, a utilização de templates otimiza o código, ao contrário de c++, onde
//não faz diferença
//Começar a API pelo código de teste, detectando as necessidades da classe.
//Por exemplo: fazer o código teste e perceber 
//O cliente vai ficar inseguro, pois ele não pode ver o andamento de um software
//Perguntar em quanto tempo o cliente quer para o software ficar pronto
//Saber lidar com os vendedores quando estiver lidando com a venda de um software
//para uma grande empresa
//Fases do ciclo de vida de um processo de Software:
/*	-Venda:
			Viabilizar e validar o software ali
			Analista de negócios NÃO é técnico
			São 2 cronogramas. O de entrega e o de execução.
	-Concepção: (pré-produção)
			Analista de sistemas: detalhar o que foi pré-concebido
	-Elaboração: (produção)
			Alterações no orcamento podem ser feitas. Hoje em dia é normal o cliente
			e a equipe estarm abertas á renegociações.
			Saber estimar prazo corretamente, nem pra mais e nem pra menos.
	-Constução (pós-produção)

	-Teste:
			Testes de aceitação: o software tem que estar pronto até aqui para
			ser testado. Tem que estar funcionando. Anteriormente, realiza-se
			testes funcionais, e eles tem de estar prontos até aqui.
			E testes não funcionais também ocorrem aqui: de segurança, 
			desempenho, legais.
			Existem vários tipos de teste.
	-Implantação (distribuição/exibição)
			o Software está pronto, passou por todos os testes. Ele é implantado.
			Encerra-se o contrato do projeto e se inicia o contrato de manutenção.

*/
//Após o encerramento:
//	-Operação e manutenção: 
//			operação assistida: quando o software é tão complexo
//			que precisa de alguem assistindo quem vai usá-lo. Exemplo: software de tráfico
//			aéreo.

#include <iostream>
#include <vector>
#include <string.h>

#include "Subject.h"
#include "Student.h"
#include "OrderedKit.h"
#include "UnorderedKit.h"

using namespace std;


int main()
{
    OrderedKit<Student> students();

    for(int i=0;i<10;i++)
    {

        Student student(i, "ana", "f",i+10, i);
        students.insert(student);
    }
    //assert();
}