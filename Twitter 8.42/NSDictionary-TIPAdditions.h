//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TIPAdditions)
- (id)tip_copyToMutable:(_Bool)arg1 uppercase:(_Bool)arg2;
- (id)tip_mutableCopyWithUppercaseKeys;
- (id)tip_mutableCopyWithLowercaseKeys;
- (id)tip_copyWithUppercaseKeys;
- (id)tip_copyWithLowercaseKeys;
- (id)tip_objectForCaseInsensitiveKey:(id)arg1;
- (id)tip_objectsForCaseInsensitiveKey:(id)arg1;
- (id)tip_keysMatchingCaseInsensitiveKey:(id)arg1;
@end

