//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWindow;

@interface TFNModalSheetRedisplayController : NSObject
{
    _Bool _isRedisplayQueued;
    _Bool _isRedisplayingModals;
    _Bool _hasDeferredRequestToRedisplayModals;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasDeferredRequestToRedisplayModals; // @synthesize hasDeferredRequestToRedisplayModals=_hasDeferredRequestToRedisplayModals;
@property(nonatomic) _Bool isRedisplayingModals; // @synthesize isRedisplayingModals=_isRedisplayingModals;
@property(nonatomic) _Bool isRedisplayQueued; // @synthesize isRedisplayQueued=_isRedisplayQueued;
@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void)_tfn_presentModals:(id)arg1 from:(id)arg2 at:(long long)arg3;
- (void)_tfn_doneRedisplayingModals;
- (void)_tfn_redisplayModalSheetsInternal;
- (void)redisplayModalSheets;
- (id)_tfn_rootModalToRedisplay;
- (id)initWithWindow:(id)arg1;

@end
