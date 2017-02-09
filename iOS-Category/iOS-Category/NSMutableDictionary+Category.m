//
//  NSMutableDictionary+Category.m
//  iOS-Category
//
//  Created by coder on 16/3/29.
//  Copyright © 2016年 coder. All rights reserved.
//

#import "NSMutableDictionary+Category.h"

@implementation NSMutableDictionary (Category)
- (void)safeSetObject:(id)obj forKeyedSubscript:(id<NSCopying>)key
{
    if (!key) {
        return ;
    }
    
    if (!obj) {
        [self removeObjectForKey:key];
    }
    else {
        [self setObject:obj forKey:key];
    }
}

- (void)safeSetObject:(id)aObj forKey:(id<NSCopying>)aKey
{
    if (aObj && ![aObj isKindOfClass:[NSNull class]] && aKey) {
        [self setObject:aObj forKey:aKey];
    } else {
        return;
    }
}

- (id)safeObjectForKey:(id<NSCopying>)aKey
{
    if (aKey != nil) {
        return [self objectForKey:aKey];
    } else {
        return nil;
    }
}
@end
