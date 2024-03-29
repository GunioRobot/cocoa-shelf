//
//  GTMLargeTypeWindow.h
//
//  Copyright 2008 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not
//  use this file except in compliance with the License.  You may obtain a copy
//  of the License at
// 
//  http://www.apache.org/licenses/LICENSE-2.0
// 
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
//  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
//  License for the specific language governing permissions and limitations under
//  the License.
//

#import <Cocoa/Cocoa.h>

// GTMLargeTypeWindow displays a block of text in a large panel window much
// like Address Book displays phone numbers. It will also display an image
// so you can pop up "alerts" similar to the way BBEdit does when you attempt
// to do a find and find nothing. It will fade in and out appropriately when
// ordered forward or backward.
// A typical fire-and-forget type usage would be:
// GTMLargeTypeWindow *window
//   = [[[GTMLargeTypeWindow alloc] initWithString:@"Foo"] autorelease];
// [window makeKeyAndOrderFront:nil];

// Amount of time to fade the window in or out
const NSTimeInterval kGTMLargeTypeWindowFadeTime;

@interface GTMLargeTypeWindow : NSPanel
// Creates a display window with |string| displayed.
// Formats |string| as best as possible to fill the screen.
- (id)initWithString:(NSString *)string;
// Creates a display window with |attrString| displayed.
// Expects you to format it as you want it to appear.
- (id)initWithAttributedString:(NSAttributedString *)attrString;
// Creates a display window with |image| displayed.
// Make sure you set the image size to what you want
- (id)initWithImage:(NSImage*)image;
// Creates a display window with |view| displayed.
- (id)initWithContentView:(NSView *)view;

// Copy the text out of the window if appropriate. This is normally called
// as part of the responder chain so that the user can copy the displayed text
// using cmd-c.
- (void)copy:(id)sender;
@end
