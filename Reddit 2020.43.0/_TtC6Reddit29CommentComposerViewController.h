//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BaseAttachmentTextView, NSLayoutYAxisAnchor;
@protocol _TtP6Reddit27CommentComposerViewDelegate_;

@interface _TtC6Reddit29CommentComposerViewController : UIViewController
{
    // Error parsing type: , name: headerView
    // Error parsing type: , name: topPaddingConstraint
    // Error parsing type: , name: maxTextHeightConstraint
    // Error parsing type: , name: minTextHeightConstraint
    // Error parsing type: , name: expandedTopConstraint
    // Error parsing type: , name: bottomConstraint
    // Error parsing type: , name: cardViewBottomConstraint
    // Error parsing type: , name: maxNumberOfLines
    // Error parsing type: , name: minNumberOfLines
    // Error parsing type: , name: headerHeight
    // Error parsing type: , name: toolbarHeight
    // Error parsing type: , name: edgePadding
    // Error parsing type: , name: $__lazy_storage_$_textContainerInset
    // Error parsing type: , name: bounceDuration
    // Error parsing type: , name: bounceHeight
    // Error parsing type: , name: controlPoint1
    // Error parsing type: , name: controlPoint2
    // Error parsing type: , name: presenter
    // Error parsing type: , name: post
    // Error parsing type: , name: commentTreeNode
    // Error parsing type: , name: isOnEditMode
    // Error parsing type: , name: metaEmoteComposeManager
    // Error parsing type: , name: metaGIFComposeManager
    // Error parsing type: , name: metaRichTextConverter
    // Error parsing type: , name: bottomViewYAnchor
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isExpanded
    // Error parsing type: , name: cardView
    // Error parsing type: , name: contentStackView
    // Error parsing type: , name: $__lazy_storage_$_commentTextView
    // Error parsing type: , name: $__lazy_storage_$_toolbar
    // Error parsing type: , name: gifButton
    // Error parsing type: , name: emoteButton
    // Error parsing type: , name: buttonContainer
    // Error parsing type: , name: subredditPowerups
    // Error parsing type: , name: subredditPowerupsSubscription
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)animate;
- (void)configureWithCommentTreeNode:(id)arg1 isOnEditMode:(_Bool)arg2 shouldBecomeFirstResponder:(_Bool)arg3;
- (void)configureWithPost:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, readonly) double composerHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresenter:(id)arg1;
@property(nonatomic, retain) BaseAttachmentTextView *commentTextView;
@property(nonatomic) __weak id <_TtP6Reddit27CommentComposerViewDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) NSLayoutYAxisAnchor *bottomViewYAnchor; // @synthesize bottomViewYAnchor;

@end
