//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTBaseAuthViewController.h"

#import "GBTIMAPTextEntryViewDelegate-Protocol.h"
#import "GBTKeyboardHelperListener-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GBTAddAccountHeaderView, GBTIMAPDisplayNameFieldView, GBTVisualElement, NSString, UIScrollView;
@protocol GBTIMAPAccountAddedConfirmationViewControllerDelegate;

@interface GBTIMAPAccountAddedConfirmationViewController : GBTBaseAuthViewController <GBTIMAPTextEntryViewDelegate, GBTKeyboardHelperListener, UIScrollViewDelegate>
{
    id <GBTIMAPAccountAddedConfirmationViewControllerDelegate> _delegate;
    GBTIMAPDisplayNameFieldView *_displayNameView;
    GBTAddAccountHeaderView *_headerView;
    GBTVisualElement *_parentVisualElement;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (id)titleForAppBar:(id)arg1;
- (id)leftBarButtonItemsForAppBar:(id)arg1;
- (void)updateScrollInsetsForKeyboard;
- (void)nextButtonTapped;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)textViewShouldMoveToNext:(id)arg1;
- (void)textViewDidUpdateText:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 parentVisualElement:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

