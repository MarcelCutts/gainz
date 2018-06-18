open Rebolt;

let currentDay = Js.Date.make() |> Js.Date.getDay |> int_of_float

let getGainz = day =>
  switch (day) {
  | 0 => "Whatever. Yoga maybe?"
  | 1
  | 4 => "CHEST DAY"
  | 2
  | 5 => "ARM DAY"
  | 3
  | 6 => "BACK DAY"
  | _ => "Guess you're doing everything here in the post-week future"
  };

let app = () =>
  <View
    style=(
      Style.style([
        Style.flexDirection(Column),
        Style.alignItems(Center),
        Style.justifyContent(Center),
        Style.flex(1.)
      ])
    )>
    <Text> ("Today is" |> ReasonReact.string) </Text>
    <Text> (currentDay |> getGainz |> ReasonReact.string) </Text>
  </View>;