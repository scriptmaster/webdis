
```v
struct User {
    id string
mut:
    firstname string;
}
```

If v is the typescript of c, then:

In TypeScript:
+ Attribute based behaviour attaching.
+ Attach functions to struct fields., by creating {S}olid function that work on that field.


```ts
interface User {
    @UUID
    id: String
    
    @Global
    FirstName: String;
    
    @FrontEndOnly
    FullName: String;

    @DBOnly
    Title_gu: String;
    Title_ta: String;

    @Calculated
    YearlyTax: bigint;

    @Subcribed
    RolePermissions: Array<String>;
}
```

This can be achieved using sirippu framework in typescript.
