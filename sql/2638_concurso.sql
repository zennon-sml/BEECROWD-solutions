SELECT c.name, ROUND((s.math*2 + s.specific*3 + s.project_plan*5) / 10,2) as avg 
from candidate c JOIN score s on s.candidate_id = c.id
ORDER by avg DESC;
