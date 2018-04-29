[@bs.module "gatsby-link"]
external gatsbyLink : ReasonReact.reactClass = "default";

[@bs.module "gatsby-link"] external navigateTo : string => unit = "navigateTo";

[@bs.module "gatsby-link"]
external withPrefix : string => string = "withPrefix";

let make =
    (
      ~to_: string,
      ~activeStyle: option(ReactDOMRe.Style.t)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~innerRef: option(ReasonReact.reactRef)=?,
      ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
      ~activeClassName: option(string)=?,
      ~exact: option(bool)=?,
      ~strict: option(bool)=?,
      ~isActive=?,
      ~location=?,
      children
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=gatsbyLink,
    ~props={
      "to": to_,
      "activeStyle": Js.Nullable.fromOption(activeStyle),
      "innerRef": Js.Nullable.fromOption(innerRef),
      "style": Js.Nullable.fromOption(style),
      "onClick": Js.Nullable.fromOption(onClick),
      "activeClassName": Js.Nullable.fromOption(activeClassName),
      "exact": Js.Nullable.fromOption(exact),
      "strict": Js.Nullable.fromOption(strict),
      "isActive": isActive,
      "location": location
    },
    children
  );

let navigateTo = navigateTo;

let withPrefix = withPrefix;