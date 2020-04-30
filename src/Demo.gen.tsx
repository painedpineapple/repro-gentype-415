/* TypeScript file generated from Demo.re by genType. */
/* eslint-disable import/first */


// tslint:disable-next-line:no-var-requires
const DemoBS = require('./Demo.bs');

// tslint:disable-next-line:max-classes-per-file 
export abstract class MakePV_t { protected opaque!: any }; /* simulate opaque types */

export const statusWorks: {
  readonly tToJs: (_1:MakePV_t) => string; 
  readonly tFromJs: (_1:string) => (null | undefined | MakePV_t); 
  readonly name: string
} = DemoBS.statusWorks;

export const statusBroken: unknown = DemoBS.statusBroken;
