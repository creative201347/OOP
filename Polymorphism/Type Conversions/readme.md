# TYPE CONVERSIONS

Three types of situations might arise in the data conversion between uncompatible types.

1. Conversion from basic type to class type.
2. Conversion from class type to basic type.
3. Conversion from one class type to another class type.

   | Conversion     |   Source Class   | Destination Class |
   | :------------- | :--------------: | ----------------: |
   | Basic -> Class |  Not applicable  |       Constructor |
   | Class -> Basic | Casting Operator |    Not applicable |
   | Class -> Class | Casting Opertaor |       Constructor |

## Basic to Class type

The conversion from basic type to class type is easy to accomplish. It may be recalled that the use of constructors was illustrated in a number of examples to initialize objects. For example, a constructor was used to build a vecctor objects from an **int** type array. Similarly, we used another constructor to build a string type object from a **char** type variable.

```
string :: string(char *a)
{
    length = strlen(a);
    p = new char[length + 1];
    strcpy(p,a);
}
```

This contructor builds a **string** type object from a **char** type variable **a**. The variables **length** and **p** are data members of the class **string**. Once this contructor has been defined in the tsring class, it can be used for conversion from **char** type to string type. Example:

```
string s1,s2;
char *name1 = "IBM PC";
char *name2 = "Apple Computer";
s1 = string(name1);
s2 = string(name2);
```

The statement `s1 = string(name1);` first converts **name1** from **char** type to **string** and then assigns the string type values to then object **s1**. The statement `s2 = name2` also does the same job by invoking the constructor implicitly.

let us consider another examples of converting an **int** type to a **class** type.

```
class time
{
    int hrs,mins;
    public:
        ...
        ...
        time(int t)
        {
            hrs = t/60;
            mins = t%60;
        }
};
```

The following exconversion statemnets can be used in a function.

```
time t1;
int duration = 85;
t1 = duration;
```

After the conversion, the **hrs** member of **t1** will contain a value of 1 and **mins** member a value of 25, denoting 1 hours and 25 minutes.
**_The constructors used for the type conversion take single argument whose type is to be converted_**

## Class to Basic type

The constructor did a fine job in the type conversion from a basic to class type. What about the conversion from a class to basic type? The constructor functions do not support this operation. Luckily, C++ allows us to define an overloaded casting operator that could be used to convert a class type data to a basic type. The general form of an overloaded casting operator function, usually referred to as a conversion function is:

```
operator typename()
{
    ...
    (function statements);
    ...
}
```

This function converts a class type data to typename. For example, the **operator double()** converts a class object to type **double**, the **operator int()** converts a class type object to type **int**, and so on.
Consider the following conversion function:

```
vector :: operator double()
{
    double sum = 0;
    for(int i=0; i<size; i++)
        sum = sum + v[i] * v[i];
    return sqrt(sum);
}
```

This function converts a vector to the corresponding scalar magnitudes. Recall that the magnitude of a vector is given by the square root of the sum of the squares of its components. The operator **double()** can be used as follows:
`double length = double(v1);` or `double length = v1;`
Where **v1** is an object of the type **vector**. Both the statements have an exactly the same effect. When the compiler encounters a statement that requires the conversion of a class type to a basic type, it quietly calls the casting operator function to do the job.

The casting operator function should satisfy the following conditions:

- It must be a classs member.
- It must not specify a return type.
- It must not specify have any arguments.

In the string example described in the previous section, we can do the conversion from string to **char** as follows:

```
string:: operator char()
{
    return (p);
}
```

## One Class to another Class type

We have seen data conversion techniques from basic to class type and class to a basic type. But there are situations where we would like to convert one class type data to another class type, i.e `objX = objY `
**objX** is an objcect of class **X** and **objY** is an object of class **Y**. The **classY** type data is converted to the **objX** type data and the converted value is assigned to the **objX**. Since the conversion takes place from **classY** to **classX** is known as the source class and **X** is known as the destination class.

Such conversions between objects of different classes can be carried out by either a constructor or a conversion function. The compiler treats them the same way. Then, how do we decide which from to use? It depends upon where we want the type-conversion function to be located in the source class or in the destination class.
We know that the casting operator function `operator typename()` converts the class object of which it is a member to typename. The typenmae may be a built-in typpe or a user-defined one (another class type). In the case of conversions between objects, typename refers to the destination class. Therefore, when a class needs to be converted, a casting operator function can be used(i.e source class). The conversion takes place in the source class and the result is given to the destination class object.

Now consider a single-argument constructor function which serves as an instruction for converting the argument's type to the class type of which it is a member. This implies that the argument belongs to the source class and is passed to the destination class for conversion.
When a conversion using a constructor is performed in the destination class, we must be able to access the data members of the object sent (by the source class) as an argumnet. Since data members of the source class are private, we must use special access functions in the source class to faciliate its data flow to the destination class.
