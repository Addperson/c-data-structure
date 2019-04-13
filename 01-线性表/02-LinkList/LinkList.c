Status getElem(LinkList L, int i, ElemType* e){

    int j;
    LinkList p;
    p=L->next;
    j=1;
    while(j<i&&p)
    { p=p->next;
        j++;
    }
    if (!p ||j>i)
        return ERROR;
    *e=p->data;
    return OK;

}
