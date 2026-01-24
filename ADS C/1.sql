--1Show all information of every table you have by using keyword SELECT (one by one).
SELECT * FROM Patients;
SELECT * FROM Doctors;
SELECT * FROM Appointments;
SELECT * FROM Visits;
SELECT * FROM Services;
SELECT * FROM Visit_services;
SELECT * FROM Invoices;
SELECT * FROM Insurance_companies;
SELECT * FROM Insurance_coverage;
--2Write a query to show the list of all doctors in the following way: doctor_id, specialization.
SELECT doctor_id, specialization
FROM Doctors;
--3Write a query to show list of visits in September 2025.
SELECT *
FROM Visits
WHERE visit_date BETWEEN '2025-09-01' AND '2025-09-30';

--4Write a query to show list of doctors that don’t have specialization “neurologist”.
SELECT *
FROM Doctors
WHERE specialization != 'Neurology';

--5Write a query to show the list of patients whose id is 3 or 5.
SELECT *
FROM Patients
WHERE patient_id=3 or patient_id=5;

--6Write a query to show names of services that cost less than 2000 and more than 4000.
SELECT service_name
FROM Services
WHERE cost < 2000 OR cost > 4000;

--7Write a query to delete all companies that give coverage less than 100 by using keyword USING.


DELETE FROM Insurance_companies aa
    USING Insurance_coverage bb
WHERE aa.ins_id = bb.ins_id
  AND bb.cov_amount < 100;

--8Write a query to increase value of insurance coverage amount by 150 and change company id to 6 where invoice id is between 2 and 5 and coverage amount less than 1000.
UPDATE Insurance_coverage
SET cov_amount = cov_amount + 150,
    ins_id = 6
WHERE inv_id BETWEEN 2 AND 5
  AND cov_amount < 1000 ;

INSERT INTO Insurance_companies (ins_id, com_name)
VALUES (6, 'New Insurance Company');
--9. Increase costs of services that are less than 1000 by 10% and show names of services and their new prices by using keyword RETURNING.
UPDATE Services
SET cost = cost * 1.10
WHERE cost < 1000
RETURNING service_name, cost;

--10. List all patients in alphabetical order by last name.
SELECT *
FROM Patients
ORDER BY last_name ASC;
--11. Show services over 2000 by sorting them by price in ascending order.
SELECT *
FROM Services
WHERE cost > 2000
ORDER BY cost ASC;

--12. Set the "pending" status for all accounts where the amount is more than 4500.
UPDATE Invoices
SET payment_status = 'Pending'
WHERE total_amount > 4500;

SELECT *
FROM services;

--13. Show services where the price (cost) is divided by 1000 without remainder.
SELECT *
FROM Services
WHERE cost % 1000 = 0;
--14. Show all appointments that start after 12:00 in last week of September.
SELECT *
FROM Appointments
WHERE ap_date BETWEEN '2025-09-24' AND '2025-09-30'
  AND ap_time > '12:00';
--15. Show names of companies with id less than 6 in alphabetical order.
SELECT com_name
FROM Insurance_companies
WHERE ins_id < 6
ORDER BY com_name ASC;