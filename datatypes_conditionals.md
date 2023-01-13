# DataTypes and Conditionals

- We use variables to store data just like in algebra.
## Basic Datatypes
- Data type specifies the size and type of information the variable will store.

<center>
<table style="border: 3px #abcdef solid;">
    <tr>
        <th> Datatype </th>
        <th> Size </th>
        <th> Description </th>
    </tr>
    <tr>
        <td> bool/boolean </td>
        <td> 1 byte </td>
        <td> Stores true or false values </td>
    </tr>
    <tr>
        <td> char </td>
        <td> 1 byte </td>
        <td> Stores single character/letter/number or ASCII value </td>
    </tr>
    <tr>
        <td> int </td>
        <td> 2 or 4 bytes </td>
        <td> Stores integer (without decimals) </td>
    </tr>
    <tr>
        <td> float </td>
        <td> 4 bytes </td>
        <td> Stores fractional numbers that has decimals (upto 6-7 decimal digits)</td>
    </tr>
    <tr>
        <td> double </td>
        <td> 8 bytes </td>
        <td> Stores fractional numbers that has decimals with more precision (that is more digits after decimal point, upto 15 decimal digits) </td>
    </tr>
    <tr>
        <td> string </td>
        <td> depends </td>
        <td> Stores array of characters. (that is words and sentences)(you have to include `string` library to use this datatype)</td>
    </tr>
</table>
</center>

- 1 byte = 8 bits
- A bit is a `0` or `1`.

- The way we store a data in c++, is as follows
    ```
    int num = 10;
    ```
    - `int` is the datatype of the value that the variable `num` will store
    - `=` is assignment operator that assigns the variable `num` a value `10`
    - every end of the statement in c++ is signified by semicolon `;` just as we use fullstop `.` in English.
    - variable name can be anything we want but there ae certain rules to follow.

## Variable Naming
- It should not be any keyword of c++. (keywords are the words that are part of the language like `main`, `int` etc)
- It should not contain spaces.
- For better code maintaining, all the variables should be named in same way(either in titlecase, lowercase or camelCase)


## OOP vs Procedural Programming
- OOP &equiv; Object Oriented Programming
- TODO: Learn about this [topic.][OOPS]


---
[&larr; Back](./README.md) |⬅️💻➡️| [Next &rarr;](./conditionals.md)

[OOPS]: https://duckduckgo.com/?q=OOPs+vs+Procedural+Programming