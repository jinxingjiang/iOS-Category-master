//
//  NSAttributedString+Category.h
//
//
//  Created by coder on 16/5/23.
//  Copyright © 2016年 coder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSAttributedString (Category)
//计算富文本的高度
- (CGFloat)heightWithContainWidth:(CGFloat)width;
@end
