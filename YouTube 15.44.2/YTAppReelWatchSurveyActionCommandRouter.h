//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTReelWatchSurveyActionCommandRouter-Protocol.h"

@class GIMMe, NSMapTable, NSString;

@interface YTAppReelWatchSurveyActionCommandRouter : NSObject <YTReelWatchSurveyActionCommandRouter>
{
    NSMapTable *_observers;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)removeReelWatchSurveyActionCommandObserver:(id)arg1;
- (void)addReelWatchSurveyActionCommandObserver:(id)arg1;
- (void)dispatchToTarget:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)handleSurveyActionCommand:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

