//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol GSKGlifViewToDotsTransitionAnimator;

@interface GSKGlifViewContext : NSObject
{
    unsigned long long _contextType;
    unsigned long long _scaleFactor;
    UIView *_contentView;
    id <GSKGlifViewToDotsTransitionAnimator> _transitionAnimator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <GSKGlifViewToDotsTransitionAnimator> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) unsigned long long contextType; // @synthesize contextType=_contextType;
- (id)description;

@end
