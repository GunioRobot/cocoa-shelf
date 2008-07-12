//
//  GoogleToolkitUnitTestAppDelegate.m
//  GoogleToolkitUnitTest
//
//  Created by John Sheets on 7/12/08.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import "GoogleToolkitUnitTestAppDelegate.h"
#import "GoogleToolkitUnitTestViewController.h"

@implementation GoogleToolkitUnitTestAppDelegate

@synthesize window;
@synthesize viewController;


- (void)applicationDidFinishLaunching:(UIApplication *)application {	
	
	// Override point for customization after app launch	
    [window addSubview:viewController.view];
	[window makeKeyAndVisible];
}


- (void)dealloc {
    [viewController release];
	[window release];
	[super dealloc];
}


@end
