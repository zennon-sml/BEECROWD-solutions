(SELECT name, customers_number
from lawyers
ORDER by customers_number DESC
LIMIT 1)
UNION ALL
(SELECT name, customers_number
from lawyers
ORDER by customers_number ASC
LIMIT 1)
UNION ALL
(SELECT 'Avarage', ROUND(AVG(customers_number), 0)
 FROM lawyers);
