sirippu converts .ts files to .c and .h files, using deno


## Sample specifications

AKA PATTERN ENGINEERING IN SOFTWARE

Note: Injects into existing code-base (not written from blank)!

#### From:
```ts
const outsz = string(strlen_out);
```

#### To:
```c
char outsz[10];
__long_to_string(strlen_out, outsz);
```


#### From:
```ts
const num = s.length;
write_to_log(TYPE_DEBUG, string(num));
```

#### To:
```c
const num = strlen(s);

/* * PATTERN 177:286 * */
char __string_num[10];
__long_to_string(num, __string_num);
/* ***** */

write_to_log(TYPE_DEBUG, __string_num);
```

convert pattern1=>pattern2
type of pattern1 converted to pattern2
pattern1(with type,etc) is given a number: 1
pattern286 is given another number

input pattern is mapped to output pattern and resolved in conflict at build time and mapped.
1:286

//*pattern 177:286

Why pattern? re-turn keyword has issues, so i changed it into pattern :)

