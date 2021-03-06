//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, STKCloseButton, STKCoreButtonSettingsBuilder, STKTimeButton;

@interface STKCircleTimerButton : UIView
{
    double _skipInterval;
    double _currentTime;
    NSTimer *_timer;
    STKTimeButton *_timerButton;
    STKCloseButton *_closeButton;
    STKCoreButtonSettingsBuilder *_internalBuilder;
    CDUnknownBlockType _completion;
}

+ (id)timerWithTimeInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) STKCoreButtonSettingsBuilder *internalBuilder; // @synthesize internalBuilder=_internalBuilder;
@property(retain, nonatomic) STKCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) STKTimeButton *timerButton; // @synthesize timerButton=_timerButton;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double skipInterval; // @synthesize skipInterval=_skipInterval;
- (void).cxx_destruct;
- (void)appendEdgesView:(id)arg1;
- (void)appendCloseButton;
- (_Bool)isCompletly;
@property(readonly, nonatomic) STKCoreButtonSettingsBuilder *builder;
- (void)timerTick;
- (void)fire;
- (void)dealloc;

@end

