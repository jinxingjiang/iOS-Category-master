//
//  NSMutableDictionary+Category.h
//  iOS-Category
//
//  Created by coder on 16/3/29.
//  Copyright © 2016年 coder. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (Category)
- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey;

- (id)safeObjectForKey:(id<NSCopying>)aKey;
@end
