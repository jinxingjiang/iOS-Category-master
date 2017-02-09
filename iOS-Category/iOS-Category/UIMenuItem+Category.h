//
//  UIMenuItem+Category.h
//
//  Created by coder on 16/7/2.
//  Copyright © 2016年 coder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIMenuItem (Category)
- (instancetype)initWithTitle:(NSString *)title actionBlock:(void (^)(id sender))block;
@end
