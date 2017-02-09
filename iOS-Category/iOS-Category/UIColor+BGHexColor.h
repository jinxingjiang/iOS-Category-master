//
//  UIColor+UIColor+BGHexColor.h
//
//
//  Created by coder on 14-1-27.
//  Copyright (c) 2014年 coder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BGHexColor)

+ (UIColor *)colorWithHex:(uint)hex alpha:(CGFloat)alpha;

/**
 *  十六进制字符串转颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)HexString;

+ (UIColor*) colorRGBonvertToHSB:(UIColor*)color withBrighnessDelta:(CGFloat)delta;

+ (UIColor*) colorRGBonvertToHSB:(UIColor*)color withAlphaDelta:(CGFloat)delta;

+ (UIColor*) colorWithHex:(NSInteger)hexValue;

@end
