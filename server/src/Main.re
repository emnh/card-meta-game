module Db = SqlCommon.Make_sql(MySql2);

let readFileSync = Node.readFileAsUtf8Sync;

let homedir = Node.getHomeDir();

let user =
  String.trim(readFileSync(Node.pathJoin([homedir, ".cmg", "mysql.user"])));

let password =
  String.trim(readFileSync(Node.pathJoin([homedir, ".cmg", "mysql.pwd"])));

let conn =
  MySql2.connect(
    ~host="localhost",
    ~port=3306,
    ~user,
    ~password,
    ~database="cmgdb",
    ()
  );

Db.query(conn, ~sql="SHOW TABLES", res =>
  switch res {
  | `Error(e) => Js.log2("ERROR: ", e)
  | `Select(rows, meta) => Js.log3("SELECT: ", rows, meta)
  }
);

Js.log("Hello, BuckleScript and Reason!");

Db.close(conn);
