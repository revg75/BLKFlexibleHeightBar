/*
 Copyright (c) 2015, Bryan Keller. All rights reserved.
 Licensed under the MIT license <http://opensource.org/licenses/MIT>
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
 documentation files (the "Software"), to deal in the Software without restriction, including without limitation
 the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and
 to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions
 of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 IN THE SOFTWARE.
 */

#import <UIKit/UIKit.h>

@class BLKFlexibleHeightBarSubviewLayoutAttributes;

/**
 The `BLKFlexibleHeightBarSubview` UIView category allows UIViews to define their own layout attributes depending on the progress (height) of their containing `BLKFlexibleHeightBar` view. Internally, the UIView instance is mapping progress values to layout attributes instances.
 
 When the BLKFlexibleHeightBar lays out its subviews, it will fetch each subview's desired layout attributes depending on the value of the bar's `progress` property. Only layout attributes for key frames need to be specified. The `BLKFlexibleHeightBar` will smoothly and seamlessly transition between layout attributes.
 */

@interface UIView (BLKFlexibleHeightBarSubview)


- (void)addLayoutAttributes:(BLKFlexibleHeightBarSubviewLayoutAttributes *)layoutAttributes forProgress:(CGFloat)progress;


- (void)removeLayoutAttributesForProgress:(CGFloat)progress;


- (NSUInteger)numberOfLayoutAttributes;


- (CGFloat)progressAtIndex:(NSUInteger)index;


- (BLKFlexibleHeightBarSubviewLayoutAttributes *)layoutAttributesAtIndex:(NSUInteger)index;

@end
