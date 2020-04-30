module type MakePV = {
  type t;
  let tToJs: t => string;
  let tFromJs: Js.String.t => option(t);
  let name: string;
};

module MakePV = (Config: SeamonsterStudiosReason.DeccoHelper.MakePV) => {
  include Config;
};

module Status =
  SeamonsterStudiosReason.DeccoHelper.MakePV({
    [@bs.deriving jsConverter]
    type t = [ | `On | `Off];

    let name = "Status";
  });

[@genType]
let statusWorks: module MakePV = (module Status);

[@genType]
let statusBroken: module SeamonsterStudiosReason.DeccoHelper.MakePV =
  (module Status);