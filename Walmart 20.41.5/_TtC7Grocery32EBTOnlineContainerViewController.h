//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Grocery25GroceryBaseViewController.h"

@class NSLayoutConstraint, UIBarButtonItem, UIScrollView, UIStackView, UIView, _TtC7Grocery21PaymentMethodLinkView;

@interface _TtC7Grocery32EBTOnlineContainerViewController : _TtC7Grocery25GroceryBaseViewController
{
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: orderTotalBarButton
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: footerView
    // Error parsing type: , name: ccContainerView
    // Error parsing type: , name: ccCardView
    // Error parsing type: , name: ccContainerViewHeightConstraint
    // Error parsing type: , name: ccCardViewTopHeightConstraint
    // Error parsing type: , name: ebtContainerView
    // Error parsing type: , name: ebtStackView
    // Error parsing type: , name: paymentMethodLinkView
    // Error parsing type: , name: promoContainerView
    // Error parsing type: , name: promoCardView
    // Error parsing type: , name: promoCardViewHeight
    // Error parsing type: , name: stateProvider
    // Error parsing type: , name: viewState
    // Error parsing type: , name: scrollViewKeyboardManager
    // Error parsing type: , name: ccSelectDelegate
    // Error parsing type: , name: ebtDelegate
    // Error parsing type: , name: configured
    // Error parsing type: , name: $__lazy_storage_$_ebtInputViewController
    // Error parsing type: , name: $__lazy_storage_$_ebtMessageViewController
    // Error parsing type: , name: ebtToggleViewController
    // Error parsing type: , name: $__lazy_storage_$_ebtAddCardViewController
    // Error parsing type: , name: $__lazy_storage_$_ebtPinnedFooterViewController
    // Error parsing type: , name: $__lazy_storage_$_ccSelectViewController
    // Error parsing type: , name: $__lazy_storage_$_promoCodeSectionViewController
    // Error parsing type: , name: dataStoreStateObserver
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *promoCardViewHeight; // @synthesize promoCardViewHeight;
@property(nonatomic) __weak UIView *promoCardView; // @synthesize promoCardView;
@property(nonatomic) __weak UIView *promoContainerView; // @synthesize promoContainerView;
@property(nonatomic) __weak _TtC7Grocery21PaymentMethodLinkView *paymentMethodLinkView; // @synthesize paymentMethodLinkView;
@property(nonatomic) __weak UIStackView *ebtStackView; // @synthesize ebtStackView;
@property(nonatomic) __weak UIView *ebtContainerView; // @synthesize ebtContainerView;
@property(nonatomic) __weak NSLayoutConstraint *ccCardViewTopHeightConstraint; // @synthesize ccCardViewTopHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *ccContainerViewHeightConstraint; // @synthesize ccContainerViewHeightConstraint;
@property(nonatomic) __weak UIView *ccCardView; // @synthesize ccCardView;
@property(nonatomic) __weak UIView *ccContainerView; // @synthesize ccContainerView;
@property(nonatomic, retain) UIView *footerView; // @synthesize footerView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak UIBarButtonItem *orderTotalBarButton; // @synthesize orderTotalBarButton;

@end
