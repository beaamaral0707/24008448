int main() {

    int q_acao1, q_acao2, q_acao3;
    float vg_acao1,vg_acao2,vg_acao3;
    float p_acao1 = 24.13, p_acao2 = 11.00, p_acao3 = 38.65;
    float d_acao1 = 17.00, d_acao2 = 35.00, d_acao3 = 25.00;
    int i_total = 1000.00; 
    
    printf("Quantas ações 1 deseja comprar? ");
    scanf("%d", &q_acao1);
    
    printf("Quantas ações 2 deseja comprar? ");
    scanf("%d", &q_acao2);
    
    printf("Quantas ações 3 deseja comprar? ");
    scanf("%d", &q_acao3);
    
   vg_acao1 = q_acao1 * p_acao1;
   vg_acao2 = q_acao2 * p_acao2;
   vg_acao3  = q_acao3 * p_acao3;
    
    float total_gasto = vg_acao1 + vg_acao2 + vg_acao3;
    
    if (total_gasto > i_total) {
        printf("Você está gastando mais do que seu orçamento, recalcule!\n");
        return 1;
    }
    
    float dy_1 = (d_acao1 / p_acao1) * 100;
    float dy_2 = (d_acao2 / p_acao2) * 100;
    float dy_3 = (d_acao3 / p_acao3) * 100;

    printf("Dividend da Ação 1: %.2f%%\n", dy_1);
    printf("Dividend da Ação 2: %.2f%%\n", dy_2);
    printf("Dividend  da Ação 3: %.2f%%\n", dy_3);
    
    printf("Total gasto: R$ %.2f\n", total_gasto);

    return 0;
}
























}
