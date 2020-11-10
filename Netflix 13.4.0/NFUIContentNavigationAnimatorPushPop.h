//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ArgoCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface NFUIContentNavigationAnimatorPushPop : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _navigationOperation;
}

@property(nonatomic) long long navigationOperation; // @synthesize navigationOperation=_navigationOperation;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithNavigationOperation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

