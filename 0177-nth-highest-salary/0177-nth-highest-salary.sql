CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE off INT DEFAULT 0;
  SET off = N - 1;
  RETURN (
      # Write your MySQL query statement below.
        SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT off, 1
  );
END