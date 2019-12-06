# Description

> In HW 7, we will implement a program that emits sequence variants and inversions. As part of the program, we will design and test a class hierarchy of Sequence objects (or class hierarchy of Sequence types), including the following classes:

### Sequence 

a class that encapsulates a word (at least 3 characters long), and responds to inquiries.
Decide and document what happens if a word is less than 3 characters long.
Decide and document your definition of state, how it's initially set, if/how it changes, etc. Determine if other states beyond "active" would facilitate the use of Sequence objects.

### Inverter

a class that based on index i and, according to state, supports the inversion of two elements (or characters) of a given sequence at indices i and i+1. 

* For example, if the index '3' was encapsulated, the word ‘marital’ would yield ‘martial’; likewise, if the index '1' was encapsulated, the word ‘tarp’ would yield ‘trap’. 

### Repeater

a class that emits a variant of the encapsulated word, repeating one or more characters. The object will only emit the variant if 'active'; otherwise, it will emit the word itself. 

* For example, if the word ‘rad’ is encapsulated, ‘raad’, ‘radd’, ‘radar’, etc. could be emitted.

### Extractor

a class that emits a variant (or subsequence) of the encapsulated word, if the provided subsequence is found. The object will only emit the subsequence if 'active'; otherwise, it will emit the word itself.

* For example, if the word ‘believe’ is encapsulated and the subsequence ‘beli’ is provided, ‘eve’ would be emitted; likewise, if the word ‘evening’ were encapsulated and the subsequence ‘ning’ is provided, ‘eve’ would be emitted.

* Decide and document what happens if (1) the provided subsequence is not found, (2) no subsequence is provided, or (3) the provided subsequence is equals to the encapsulated word.

### Variator

a class that emits a variant of the encapsulated word, either concatenating or truncating an internal subsequence. If active, the object will arbitrarily concatenate or truncate an internal subsequence; otherwise, it will emit the word itself.
* For example, if the word ‘seesaw’ is encapsulated, ‘seesawse’, ‘saseesaw’, ‘seesaws’, etc., could be returned. Alternatively, ‘see’, ‘sees’, 'eesa', etc. could be returned.

# Feedback Questions

The following questions were created by the instructor, Sheila Oh, Seattle Univ

Computer Science Fundamentals Graduate Certificate Program

### How much time did you spend on the assignment?

#### about 21 hours:

* Sat -- 3 hours

* Sun -- 5 hours

* Mon -- 5 hours

* Wed -- 2 + 6 hours

### Is your solution fully working or not? Briefly describe design decisions and class structure.

#### design decisions: 

* simple random number generated to invert indices

- Because Sequence implements invert(), it's the proper class to encapsulate int i for abstract Inverter class.

- The sequence object must be active in order to invert.

- Sequence allows guessing on inactive sequences.

#### class structure:

* Sequence is-an Inverter (extends Inverter),

* Repeater, Extractor, and Variator each is-a Sequence (extends Sequence)

### Did you work on the extra credit problem? Briefly describe any issues or explain any assumptions made.

### Any feedback on the assignment?
