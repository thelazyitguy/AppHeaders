//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/GSKGlifRepeatedUpdateAnimator-Protocol.h>

@class NSString, UIView;
@protocol GSKGlifDotsView><GSKGlifDotsLayout;

@interface GSKGlifDotsReplyingAnimator : NSObject <GSKGlifRepeatedUpdateAnimator>
{
    _Bool _isRotationInProgress;
    _Bool _isAnimating;
    _Bool _flushCATransactionIfNeeded;
    UIView<GSKGlifDotsView><GSKGlifDotsLayout> *_dotsView;
    unsigned long long _settleDownState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool flushCATransactionIfNeeded; // @synthesize flushCATransactionIfNeeded=_flushCATransactionIfNeeded;
@property(readonly, nonatomic) unsigned long long settleDownState; // @synthesize settleDownState=_settleDownState;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIView<GSKGlifDotsView><GSKGlifDotsLayout> *dotsView; // @synthesize dotsView=_dotsView;
- (void)continueFromCurrentAngleToRepeatedFullRotation;
- (void)settleDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateValue:(double)arg1;
- (void)removeAllAnimations;
- (void)beginAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
