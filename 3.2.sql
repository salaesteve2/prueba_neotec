-- 1
SELECT Nombre, Apellidos FROM Profesor p
JOIN Departamento d ON p.IDDepartamento = d.IDDepartamento
WHERE p.Sueldo > 30000 AND d.Presupuesto_anual > 200000;

-- 2
UPDATE Asignatura
SET Horas = 50 WHERE Horas < 50;

-- 3
DELETE FROM Alumno WHERE DNI = '33444555K.';