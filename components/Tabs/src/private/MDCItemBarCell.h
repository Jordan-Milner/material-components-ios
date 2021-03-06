// Copyright 2016-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

#import "MaterialRipple.h"

@class MDCItemBarStyle;

/** View displaying an individual item in an item bar. */
@interface MDCItemBarCell : UICollectionViewCell

/** Returns the optimal size for the item with the given size class and content view object. */
+ (CGSize)sizeThatFits:(CGSize)size
                  item:(nonnull UITabBarItem *)item
                 style:(nonnull MDCItemBarStyle *)style;

/** Title for the tab. Defaults to the empty string. */
@property(nonatomic, copy, nonnull) NSString *title;

/** Image shown on the tab. Defaults to nil. */
@property(nonatomic, strong, nullable) UIImage *image;

/** Image shown on the tab when tab is in a selected state. Defaults to @c image if nil. */
@property(nonatomic, strong, nullable) UIImage *selectedImage;

/** Text displayed in upper-right corner of the tab. Uses title color. */
@property(nonatomic, copy, nullable) NSString *badgeValue;

/** Frame within the cell for its primary content. */
@property(nonatomic, readonly) CGRect contentFrame;

/** The @c MDCRippleTouchController responsible for user feedback in the cell. */
@property(nonatomic, strong, nonnull) MDCRippleTouchController *rippleTouchController;

/** Updates the cell to use the given style properties. */
- (void)applyStyle:(nonnull MDCItemBarStyle *)itemStyle;

/** Updates the cell to display the given item. */
- (void)updateWithItem:(nonnull UITabBarItem *)item
               atIndex:(NSInteger)itemIndex
                 count:(NSInteger)itemCount;

@end
