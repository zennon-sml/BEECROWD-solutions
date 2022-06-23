SELECT name, round(salary*10/100,2) as tax
from people
WHERE salary > 3000;
