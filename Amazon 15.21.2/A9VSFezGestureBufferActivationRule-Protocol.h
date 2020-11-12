//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezEngine, A9VSFezGestureBuffer;

@protocol A9VSFezGestureBufferActivationRule <NSObject>
@property(readonly, nonatomic) _Bool isSatisfied;
- (void)dissatisfy;
- (void)evaluateSatisfactionUsingEngine:(A9VSFezEngine *)arg1 forStage:(long long)arg2;

@optional
- (void)didApplyActivationRuleToGestureBuffer:(A9VSFezGestureBuffer *)arg1;
@end
