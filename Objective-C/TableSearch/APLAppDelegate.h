/*
 Copyright (C) 2017 Apple Inc. All Rights Reserved.
 See LICENSE.txt for this sample’s licensing information
 
 Abstract:
 The application delegate class used for setting up our data model and state restoration.
 */

@import UIKit;

@class APLProduct;

@interface APLAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, strong) NSArray<APLProduct *> *products;

@end
