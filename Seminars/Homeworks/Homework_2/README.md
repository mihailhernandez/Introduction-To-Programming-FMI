## Домашна работа № 2

### Задача 1
Да се напише функция от по-висок ред, която приема масив от низове от малки латински букви,
броя на низове, както и указатели към други функции и принтира на конзолата за всички низове,
които са палиндроми и са с четна дължина, символът, който се среща най-много пъти.
(Ако има повече от един такива символи да се изведе най-малкият лексикографски).</br></br>
<strong>Пояснение:</strong></br>напишете отделни функции за проверка дали низ е палиндром,
за брой на символите на низ <strong>(не ползвайте вградения strlen !)</strong>
и функция за изкарване на най-често срещаната буква от низ.</br></br>
<strong>Ограничения:</strong></br>
1 <= дължина на низ <= 100</br>
1 <= брой  на низовете <= 100</br></br>
<strong>Пример:</strong></br></br>
<strong>Вход:</strong></br>
4</br>
cbbc</br>
abcba</br>
bdfeb</br>
yzaabbaazy</br>

<strong>Изход:</strong></br>
b a</br>

<strong>Разяснение на примера:</strong></br>
“cbbc” е палиндром с дължина 4 и ’b’ се среща най-много пъти;</br>
“abcba” e палиндром, но е с нечетна дължина;</br>
“bdfeb” не е палинром;</br>
“yzaabbaazy” е палидром с дължина 10 и ‘а’ e най-често срещания символ;</br>

### Задача 2
Дадени са низ, символ и число N. Да се напише рекурсивна функция, която връща 
позицията на N-тото срещане на този символ в низа. Позицията на символите започва от 0.
Ако няма такова срещане, функцията да върне -1.</br></br>
<strong>Ограничения:</strong></br>
1 <= дължина на низ <= 100</br>
1 <= N <= 100</br></br>
<strong>Пример:</strong></br></br>
<strong>Вход:</strong></br>
abcdbcbdf</br>
d</br>
2</br>

<strong>Изход:</strong></br>
7</br>

<strong>Вход:</strong></br>
iLovePizzaiii</br>
i</br>
3</br>

<strong>Изход:</strong></br>
10</br>

#### Качете само един ZIP архив с всички cpp файлове. Името на архива да съдържа вашия факултетен номер.
