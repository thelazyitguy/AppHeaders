//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol DOKRegionConfig;

@interface DOKRegionStateFactory : NSObject
{
    id <DOKRegionConfig> _config;
    NSArray *_states;
    UIView *_view;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSArray *states; // @synthesize states=_states;
@property(retain, nonatomic) id <DOKRegionConfig> config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)createStateList;
- (id)newNoRegionState;
- (id)newBottomRightState;
- (id)newBottomLeftState;
- (id)newTopRightState;
- (id)newTopLeftState;
- (id)initWithView:(id)arg1 containerView:(id)arg2;

@end
