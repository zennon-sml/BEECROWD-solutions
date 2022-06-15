SELECT c.id, c.name
from customers c
where c.id not in(SELECT l.id_customers from locations l WHERE l.id_customers = c.id );
*/ comparar o id de c se não é igual a nenhum fk_id_customers ai siginifica que ele não realizou nehuma compra ainda */
