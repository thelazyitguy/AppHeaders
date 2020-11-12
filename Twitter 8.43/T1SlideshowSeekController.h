//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TAVSeekCursor, TFNTwitterAccount, TFSTimer, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol T1SlideshowSeekControllerDelegate;

@interface T1SlideshowSeekController : NSObject <UIGestureRecognizerDelegate>
{
    id <T1SlideshowSeekControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    TFSTimer *_tapToSeekCursorTimeout;
    TFSTimer *_tapToSeekDisplayTimeout;
    TAVSeekCursor *_lastSeekCursor;
    UITapGestureRecognizer *_singleVideoTapRecognizer;
    UITapGestureRecognizer *_doubleVideoTapRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    CDStruct_1b6d18a9 _currentTapToSeekStep;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *doubleVideoTapRecognizer; // @synthesize doubleVideoTapRecognizer=_doubleVideoTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleVideoTapRecognizer; // @synthesize singleVideoTapRecognizer=_singleVideoTapRecognizer;
@property(retain, nonatomic) TAVSeekCursor *lastSeekCursor; // @synthesize lastSeekCursor=_lastSeekCursor;
@property(nonatomic) CDStruct_1b6d18a9 currentTapToSeekStep; // @synthesize currentTapToSeekStep=_currentTapToSeekStep;
@property(retain, nonatomic) TFSTimer *tapToSeekDisplayTimeout; // @synthesize tapToSeekDisplayTimeout=_tapToSeekDisplayTimeout;
@property(retain, nonatomic) TFSTimer *tapToSeekCursorTimeout; // @synthesize tapToSeekCursorTimeout=_tapToSeekCursorTimeout;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1SlideshowSeekControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_t1_updateSeekHUD;
- (void)_t1_performSeekOfStep:(CDStruct_1b6d18a9)arg1 fromPlaybackState:(id)arg2;
- (_Bool)canSeekForRecognizer:(id)arg1 direction:(_Bool *)arg2;
- (_Bool)canSeekForPlaybackState:(id)arg1;
- (_Bool)handleTapToSeek:(id)arg1;
- (CDStruct_1b6d18a9)_t1_seekStep;
- (void)_t1_videoDidLongPressWithRecognizer:(id)arg1;
- (void)_t1_videoDidTapWithRecognizer:(id)arg1;
- (void)configureWithPlayerView:(id)arg1;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
