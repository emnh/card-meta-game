[@bs.val] [@bs.module "fs"]
external readFileSync :
  (
    string,
    [@bs.string]
    [
      | `hex
      | `utf8
      | `ascii
      | `latin1
      | `base64
      | `ucs2
      | `base64
      | `binary
      | `utf16le
    ]
  ) =>
  string =
  "readFileSync";

[@bs.val] [@bs.module "fs"]
external readFileAsUtf8Sync : (string, [@bs.as "utf8"] _) => string =
  "readFileSync";

[@bs.val] [@bs.module "os"] external getHomeDir : unit => string = "homedir";

[@bs.val] [@bs.module "path"]
external pathJoin2 : (string, string) => string = "join";

let pathJoin = x => List.fold_left(pathJoin2, List.hd(x), List.tl(x));
