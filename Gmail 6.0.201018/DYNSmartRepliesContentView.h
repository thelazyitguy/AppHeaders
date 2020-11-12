//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

#import "DYNSmartRepliesViewDelegate-Protocol.h"

@class DYNSmartRepliesView;
@protocol DYNSmartRepliesContentViewDelegate, DYNSmartReplyList;

@interface DYNSmartRepliesContentView : GOOBaseContentView <DYNSmartRepliesViewDelegate>
{
    DYNSmartRepliesView *_smartRepliesView;
    id <DYNSmartRepliesContentViewDelegate> _delegate;
    id <DYNSmartReplyList> _lastSmartReplyListDisplayed;
    unsigned long long _lastNumberOfSmartRepliesDisplayed;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)smartRepliesView:(id)arg1 displayedSmartReplies:(id)arg2 numberOfSmartRepliesDisplayed:(unsigned long long)arg3;
- (void)smartRepliesView:(id)arg1 smartReplyTapped:(id)arg2;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
