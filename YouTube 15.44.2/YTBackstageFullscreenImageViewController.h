//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTBackstageFullscreenImageViewDelegate-Protocol.h>
#import <Module_Framework/YTEngagementToolbarViewDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTTopController-Protocol.h>

@class NSString, UIPanGestureRecognizer, YTCommandResponderEvent, YTICommand;
@protocol YTBackstageFullscreenImageViewModel, YTResponder;

@interface YTBackstageFullscreenImageViewController : UIViewController <YTGraftingViewController, YTBackstageFullscreenImageViewDelegate, YTEngagementToolbarViewDelegate, YTTopController>
{
    id <YTBackstageFullscreenImageViewModel> _model;
    _Bool _preferStatusBarHidden;
    _Bool _handledDismissGesture;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    YTICommand *_navigationEndpoint;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (_Bool)handleCommentActionCompletedEvent:(id)arg1;
- (void)dismissWithBlock:(CDUnknownBlockType)arg1;
- (void)handleDismissGesture:(id)arg1;
- (void)didTapCreateReplyButton;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1;
- (void)didTapCloseButton;
- (void)didTapImageView;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)navEndpoint;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end

