# gatsby-link-reason

Use `gatsby-link` in ReasonML

## Installation

```
npm i gatsby-link-reason
```

## Usage

See [gatsby-link](https://github.com/gatsbyjs/gatsby/tree/master/packages/gatsby-link) for documentation.

```ocaml
// MyGatsbyComponent.re

let component = ReasonReact.statelessComponent("MyGatsbyComponent");

let text = ReasonReact.stringToElement;

let make = _children => {
    ...component,
    render: _self =>
        <div>
            <GatsbyLink to_="/page_2">(text("Go to page_2"))</GatsbyLink>
        </div>
};

let default = ReasonReact.wrapReasonForJs(~component, jsProps => make(jsProps##children));
```

## License

[MIT](https://github.com/jtberglund/gatsby-link-reason/blob/master/LICENSE)
