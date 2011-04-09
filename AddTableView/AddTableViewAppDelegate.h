//
//  AddTableViewAppDelegate.h
//  AddTableView
//
//  Created by Alximik on 09.04.11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddTableViewViewController;

@interface AddTableViewAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet AddTableViewViewController *viewController;

@end
