//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol ASKTimeline;

@protocol ASKInteraction <NSObject>
+ (id)new;
@property(readonly, nonatomic) _Bool isCompleted;
@property(readonly, nonatomic) NSString *target;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSDictionary *tags;
@property(readonly, nonatomic) id <ASKTimeline> timeline;
- (void)addTagWithKey:(NSString *)arg1 value:(NSString *)arg2;
- (void)setSource:(NSString *)arg1;
- (void)completeInteraction;
- (id)init;
@end
