//
//  AppDelegate.h
//  MyFrame
//
//  Created by sean zheng on 3/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (retain, nonatomic) RootViewController *rootController;

@end