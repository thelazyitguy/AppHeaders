//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import <Module_Framework/YTTopController-Protocol.h>

@class NSString, YTCommandResponderEvent, YTCreateFlagCommentContentViewController, YTIVideoFlagDetailsFormRenderer;
@protocol YTResponder;

@interface YTCreateFlagCommentViewController : YTStyledViewController <YTTopController>
{
    YTCreateFlagCommentContentViewController *_contentViewController;
    YTIVideoFlagDetailsFormRenderer *_renderer;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)titleBarColor;
- (void)setupSendButton:(_Bool)arg1;
- (void)userCommentsDidChange:(id)arg1;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)didTapSendButton:(id)arg1;
- (void)didTapCloseButton:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)userComments;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

