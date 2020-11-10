//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFUIPercentDrivenInteractiveTransition.h>

#import <ArgoCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIGestureRecognizer;

@interface NFUIContentNavigationPopInteractionController : NFUIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    UIGestureRecognizer *_recognizer;
    CDUnknownBlockType _block;
    CDUnknownBlockType _conditionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType conditionBlock; // @synthesize conditionBlock=_conditionBlock;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void)handleGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 conditionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
