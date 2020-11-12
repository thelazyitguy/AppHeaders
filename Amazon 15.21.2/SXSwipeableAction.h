//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SXSwipeableAction : NSObject
{
    UIView *_defaultActionView;
    UIView *_selectedActionView;
    UIView *_contentView;
    double _swipeActionThreshold;
    double _swipeReturnThreshold;
}

@property(nonatomic) double swipeReturnThreshold; // @synthesize swipeReturnThreshold=_swipeReturnThreshold;
@property(nonatomic) double swipeActionThreshold; // @synthesize swipeActionThreshold=_swipeActionThreshold;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *selectedActionView; // @synthesize selectedActionView=_selectedActionView;
@property(retain, nonatomic) UIView *defaultActionView; // @synthesize defaultActionView=_defaultActionView;
- (void).cxx_destruct;
- (id)init;

@end
