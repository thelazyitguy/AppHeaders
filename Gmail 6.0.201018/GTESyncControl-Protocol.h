//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTEUpdatesLocking-Protocol.h"

@class NSString;
@protocol GTESyncControlDelegate;

@protocol GTESyncControl <GTEUpdatesLocking>
@property(nonatomic) __weak id <GTESyncControlDelegate> syncDelegate;
- (void)syncWithTickleVersion:(NSString *)arg1 syncPolicy:(long long)arg2;
- (void)syncWithReason:(long long)arg1 fetchPolicy:(long long)arg2;
- (_Bool)hasPendingMutations;
@end
