typedef struct receita Receita;
typedef struct despesa Despesa;
typedef struct pagamento Pagamento;
typedef struct produto Produto;

struct receita{
   char origem[26];
   char valor[9];
   char data[11];
   char status;
};

struct despesa{
   char tipo[26];
   char valor[9];
   char data[11];
   char status;
};

struct pagamento{
   char destino[31];
   char valor[9];
   char data[11];
   char status;
};

struct produto{
   char tipo[26];
   char valor[9];
   char data[11];
   char status;
};

void cadastrarReceita(void);
void atualizarReceita(void);
void alterarDespesa(void);
void excluirReceita(void);
void cadastrarDespesa(void);
void atualizarDespesa(void);
void excluirDespesa(void);
void cadastrarPagamento(void);
void atualizarPagamento(void);
void excluirPagamento(void);
void alterarProduto(void);
void excluirProduto(void);
void incluirProduto(void);
void consultarOrcamento(void);
void consultarDespesas(void);
void consultarPagamentos(void);

void exibeReceita (Receita*);
void gravaReceita (Receita*);
void exibePagamento(Pagamento*);
void gravaPagamento(Pagamento*);
void exibeDespesa (Despesa*);
void gravaDespesa (Despesa*);
void exibeProduto (Produto*);
void gravaProduto (Produto*);
