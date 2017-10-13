# Table Search with UISearchController

This sample demonstrates how to use UISearchController. A search controller manages the presentation of a search bar, in concert with the results view controller’s content. It also demonstrates how to use UIStateRestoration to restore the search controller.

## Build Requirements
+ iOS 10.2 SDK or later

## Runtime Requirements
+ iOS 8.0 or later

## Changes

I have changed the Objective-C version in this branch such that:

1. It's an iPad app;
2. Put the table view within an embedded view controller so it didn't take a full screen and I made this the new "initial" view controller, bypassing the navigation controller of the original demo;
3. Changed app delegate so it didn't try to "push" the `products` array to the table, but instead changed `APLMainTableViewController` to pull the `products` from the app delegate.
4. Changed the `didSelectRowAt` to `showViewController` rather than push it, because it's no longer within a navigation controller. Obviously, the details screen no longer has ability to "pop" back, but the focus here was on the search controller within the table view, not the full navigation within the app.
5. Temporarily turned off state restoration stuff because I didn't want to deal with that for this test.

Having done this, the Cancel button works as expected. I haven't yet looked at the `scopeButtonTitles` issue, though (and when I just tried adding that, the UI was not correct, just like shown [in this Stack Overflow question](https://stackoverflow.com/questions/46721415/uisearchcontroller-ios-11-not-in-navigation-bar-busted)).

Copyright (C) 2014-2017 Apple Inc. All rights reserved.
