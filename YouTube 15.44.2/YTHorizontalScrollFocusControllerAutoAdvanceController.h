//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTLastActionObserver-Protocol.h"
#import "YTScrollFocusActivationNotifier-Protocol.h"
#import "YTScrollFocusAutoAdvanceProtocol-Protocol.h"

@class GIMMe, NSString, YTMonotonicDate, YTUserDefaults;
@protocol YTScrollFocusAutoAdvanceDelegate;

@interface YTHorizontalScrollFocusControllerAutoAdvanceController : NSObject <YTLastActionObserver, YTScrollFocusActivationNotifier, YTScrollFocusAutoAdvanceProtocol>
{
    id <YTScrollFocusAutoAdvanceDelegate> _autoAdvanceDelegate;
    YTUserDefaults *_userDefaults;
    _Bool _shouldReset;
    GIMMe *_gimme;
    YTMonotonicDate *_latestIMPStartDate;
    double _autoAdvanceTimeElapsed;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldReset; // @synthesize shouldReset=_shouldReset;
@property(nonatomic) double autoAdvanceTimeElapsed; // @synthesize autoAdvanceTimeElapsed=_autoAdvanceTimeElapsed;
@property(retain, nonatomic) YTMonotonicDate *latestIMPStartDate; // @synthesize latestIMPStartDate=_latestIMPStartDate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)shouldAutoAdvance;
- (void)actionDidOccur;
- (void)removeScrollFocusActivationObserver:(id)arg1;
- (void)addScrollFocusActivationObserver:(id)arg1;
- (void)scrollFocusCellActivationDidFinish;
- (void)scrollFocusCellActivationDidStart;
- (void)reset;
- (id)initWithAutoAdvanceDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

