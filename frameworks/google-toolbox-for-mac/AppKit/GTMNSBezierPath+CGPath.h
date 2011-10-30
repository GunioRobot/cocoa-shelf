//
//  GTMNSBezierPath+CGPath.h
//
//  Copyright 2006-2008 Google Inc.
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

///  Category for extracting a CGPathRef from a NSBezierPath
@interface NSBezierPath (GTMBezierPathCGPathAdditions)

///  Extract a CGPathRef from a NSBezierPath.
//
//  Args:
//
//  Returns:
//    Converted CGPathRef. Must be released by client (CGPathRelease).
//    nil if failure.
- (CGPathRef)gtm_createCGPath;

@end
