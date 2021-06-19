# atv3
O commit #1 feito após o vídeo implementa o header corretamente. Tive de retirar as funções de dentro struct para isso.

Tudo funciona como pedido no exercício, porém, não consegui utilizar a função 'insere' que estava querendo utilizar, poderia me ajudar?

Com certeza é por causa do tipo 'void' dela. E como ela estava antes dentro da struct, os valores eram atribuídos assim que eu escrevia t.insere(3,4,5) por exemplo, e serviam para os cálculos das funções posteriores. 

Tentei reescrevê-la dentro e fora da estrutura com o tipo tTriangulo, para retornar uma estrutura com os valores digitados na main pela t.insere(), mas não achei nenhuma solução.  
Essa função "insere" está comentada no código e nos commits anteriores. Além disso, o vídeo foi feito com a versão antiga do código, que possui a mesma, mas não tem header file.

------ ATUALIZAÇÃO 19/06 às 18h03 ------

O commit #2 ajeita os erros e põe dentro da struct somente as funções necessárias que são chamadas na main. Exclui declarações desnecessárias de criação de struct dentro das funções de conta, manipulando somente a estrutura necessária, sem criar structs novas a cada função chamada.
