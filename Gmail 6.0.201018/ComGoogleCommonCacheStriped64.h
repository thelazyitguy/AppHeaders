//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNumber.h>

@interface ComGoogleCommonCacheStriped64 : NSNumber
{
    unsigned long long cells_;
    // Error parsing type: Aq, name: base_
    // Error parsing type: Ai, name: busy_
}

+ (void)initialize;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)internalResetWithLong:(long long)arg1;
- (void)retryUpdateWithLong:(long long)arg1 withIntArray:(id)arg2 withBoolean:(_Bool)arg3;
- (_Bool)casBusy;
- (_Bool)casBaseWithLong:(long long)arg1 withLong:(long long)arg2;

@end
