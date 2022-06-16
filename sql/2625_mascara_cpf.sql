SELECT CONCAT(
SUBSTRING(cpf,1,3),'.',
SUBSTRING(cpf,4,3),'.',
SUBSTRING(cpf,7,3),'-',
SUBSTRING(cpf,10,2)
)
from natural_person;
/* alternativo SELECT substring(cpf, 1, 3 ) || '.' || substring(cpf, 4, 3 ) || '.' || substring(cpf, 7, 3) || '-' || substring(cpf, 10, 2) */
