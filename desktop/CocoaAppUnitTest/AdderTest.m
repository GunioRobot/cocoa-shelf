//
//  AdderTest.m
//  CocoaAppUnitTest
//
//  Created by John Sheets on 7/20/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "AdderTest.h"


@implementation AdderTest

- (void) testAddition
{
    Adder* adder = [[Adder alloc] init];
    STAssertEquals(6, [adder add:2 to:4], "2 + 4 = 6");
}

@end
