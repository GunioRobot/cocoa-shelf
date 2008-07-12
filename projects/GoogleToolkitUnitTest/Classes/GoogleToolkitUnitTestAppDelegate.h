//
//  GoogleToolkitUnitTestAppDelegate.h
//  GoogleToolkitUnitTest
//
//  Created by John Sheets on 7/12/08.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GoogleToolkitUnitTestViewController;

@interface GoogleToolkitUnitTestAppDelegate : NSObject <UIApplicationDelegate> {
	IBOutlet UIWindow *window;
	IBOutlet GoogleToolkitUnitTestViewController *viewController;
}

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) GoogleToolkitUnitTestViewController *viewController;

@end

