//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTRendererController-Protocol.h>

@class GIMMe, NSString, YTEmojiCustomEmojiParser, YTEmojiPickerCollectionViewController, YTEmojiView, YTTimedAction;
@protocol YTEmojiControllerDelegate, YTResponder;

@interface YTEmojiController : NSObject <YTRendererController>
{
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEmojiControllerDelegate> _delegate;
    YTEmojiPickerCollectionViewController *_collectionViewController;
    YTEmojiView *_inputView;
    YTTimedAction *_rateDeletetionTimer;
    YTEmojiCustomEmojiParser *_emojiParser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTEmojiCustomEmojiParser *emojiParser; // @synthesize emojiParser=_emojiParser;
@property(retain, nonatomic) YTTimedAction *rateDeletetionTimer; // @synthesize rateDeletetionTimer=_rateDeletetionTimer;
@property(retain, nonatomic) YTEmojiView *inputView; // @synthesize inputView=_inputView;
@property(readonly, nonatomic) YTEmojiPickerCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) __weak id <YTEmojiControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)fillEmojisFromEmojiIdsIfNeededUpsell:(id)arg1;
- (void)fillEmojisFromEmojiIdsIfNeeded:(id)arg1;
- (void)fillEmojisInModel:(id)arg1;
- (void)resetRateDeletionTimers;
- (void)onRateDeleteWordsTimerFired;
- (void)startRateDeleteWordsTimer;
- (void)onRateDeleteCharacterTimerFired;
- (void)startRateDeleteTimer;
- (void)onBackspaceButtonUp;
- (void)onBackspaceButtonDown;
- (void)onKeyboardButtonTapped;
- (void)setupView;
- (void)loadWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 emojiParser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

