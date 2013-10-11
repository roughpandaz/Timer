//
//  SBTickView.h
//  TimerV2
//
//  Created by Don Zhang on 13-10-11.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBTickView : UIView

@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) CGFloat fontSize;
@property (nonatomic, strong) UIColor *backColor;
@property (nonatomic, strong) UIColor *titleColor;
+ (id)tickViewWithTitle:(NSString *)title fontSize:(CGFloat)fontSize;

@end
