//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class DYNMessageContentViewGestureUtils, DYNMessageTextView, DYNMessageViewNavigationHelper, NSArray, NSString, UITapGestureRecognizer;

@interface DYNMessageTextContentView : GOOBaseContentView <UIGestureRecognizerDelegate>
{
    DYNMessageTextView *_textView;
    DYNMessageContentViewGestureUtils *_gestureUtils;
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _isRestricted;
    DYNMessageViewNavigationHelper *_navigationHelper;
    NSArray *_linkInlineAnnotations;
    NSArray *_userMentionAnnotations;
}

- (void).cxx_destruct;
- (_Bool)handledAsMentionInteractionForGesture:(id)arg1;
- (id)userIDForGesture:(id)arg1;
- (_Bool)handledAsLinkInteractionForGesture:(id)arg1;
- (id)urlMetadataForGesture:(id)arg1;
- (_Bool)canHandleTapGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
@property(nonatomic) unsigned long long maximumNumberOfLines;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

