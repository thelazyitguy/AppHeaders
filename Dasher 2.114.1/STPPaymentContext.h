//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stripe/STPPaymentMethodsViewControllerDelegate-Protocol.h>
#import <Stripe/STPShippingAddressViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PKShippingMethod, STPAPIClient, STPAddress, STPPaymentConfiguration, STPPaymentContextAmountModel, STPPaymentMethodsViewController, STPPromise, STPTheme, STPUserInformation, STPVoidPromise, UIView, UIViewController;
@protocol STPBackendAPIAdapter, STPPaymentContextDelegate, STPPaymentMethod;

@interface STPPaymentContext : NSObject <STPPaymentMethodsViewControllerDelegate, STPShippingAddressViewControllerDelegate>
{
    _Bool _shippingAddressNeedsVerification;
    id <STPBackendAPIAdapter> _apiAdapter;
    STPPaymentConfiguration *_configuration;
    STPTheme *_theme;
    STPUserInformation *_prefilledInformation;
    UIViewController *_hostViewController;
    id <STPPaymentContextDelegate> _delegate;
    id <STPPaymentMethod> _selectedPaymentMethod;
    NSArray *_paymentMethods;
    PKShippingMethod *_selectedShippingMethod;
    NSArray *_shippingMethods;
    STPAddress *_shippingAddress;
    NSString *_paymentCurrency;
    NSString *_paymentCountry;
    long long _modalPresentationStyle;
    long long _largeTitleDisplayMode;
    UIView *_paymentMethodsViewControllerFooterView;
    UIView *_addCardViewControllerFooterView;
    STPAPIClient *_apiClient;
    STPPromise *_loadingPromise;
    STPVoidPromise *_willAppearPromise;
    STPVoidPromise *_didAppearPromise;
    STPPaymentMethodsViewController *_paymentMethodsViewController;
    unsigned long long _state;
    STPPaymentContextAmountModel *_paymentAmountModel;
    UIViewController *_originalTopViewController;
}

+ (unsigned long long)pkShippingType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *originalTopViewController; // @synthesize originalTopViewController=_originalTopViewController;
@property(nonatomic) _Bool shippingAddressNeedsVerification; // @synthesize shippingAddressNeedsVerification=_shippingAddressNeedsVerification;
@property(retain, nonatomic) STPPaymentContextAmountModel *paymentAmountModel; // @synthesize paymentAmountModel=_paymentAmountModel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak STPPaymentMethodsViewController *paymentMethodsViewController; // @synthesize paymentMethodsViewController=_paymentMethodsViewController;
@property(retain, nonatomic) STPVoidPromise *didAppearPromise; // @synthesize didAppearPromise=_didAppearPromise;
@property(retain, nonatomic) STPVoidPromise *willAppearPromise; // @synthesize willAppearPromise=_willAppearPromise;
@property(retain, nonatomic) STPPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(retain, nonatomic) STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) UIView *addCardViewControllerFooterView; // @synthesize addCardViewControllerFooterView=_addCardViewControllerFooterView;
@property(retain, nonatomic) UIView *paymentMethodsViewControllerFooterView; // @synthesize paymentMethodsViewControllerFooterView=_paymentMethodsViewControllerFooterView;
@property(nonatomic) long long largeTitleDisplayMode; // @synthesize largeTitleDisplayMode=_largeTitleDisplayMode;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(copy, nonatomic) NSString *paymentCountry; // @synthesize paymentCountry=_paymentCountry;
@property(copy, nonatomic) NSString *paymentCurrency; // @synthesize paymentCurrency=_paymentCurrency;
@property(retain, nonatomic) STPAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) NSArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) PKShippingMethod *selectedShippingMethod; // @synthesize selectedShippingMethod=_selectedShippingMethod;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) id <STPPaymentMethod> selectedPaymentMethod; // @synthesize selectedPaymentMethod=_selectedPaymentMethod;
@property(nonatomic) __weak id <STPPaymentContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) STPUserInformation *prefilledInformation; // @synthesize prefilledInformation=_prefilledInformation;
@property(retain, nonatomic) STPTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) STPPaymentConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <STPBackendAPIAdapter> apiAdapter; // @synthesize apiAdapter=_apiAdapter;
- (void)artificiallyRetain:(id)arg1;
- (id)buildPaymentRequest;
- (void)didFinishWithStatus:(unsigned long long)arg1 error:(id)arg2;
- (void)requestPayment;
- (_Bool)requestPaymentShouldPresentShippingViewController;
- (void)appropriatelyDismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shippingAddressViewController:(id)arg1 didFinishWithAddress:(id)arg2 shippingMethod:(id)arg3;
- (void)shippingAddressViewController:(id)arg1 didEnterAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shippingAddressViewControllerDidCancel:(id)arg1;
- (void)pushShippingViewController;
- (void)presentShippingViewControllerWithNewState:(unsigned long long)arg1;
- (void)presentShippingViewController;
- (void)appropriatelyDismissPaymentMethodsViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentMethodsViewController:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)paymentMethodsViewControllerDidCancel:(id)arg1;
- (void)paymentMethodsViewControllerDidFinish:(id)arg1;
- (void)paymentMethodsViewController:(id)arg1 didSelectPaymentMethod:(id)arg2;
- (void)pushPaymentMethodsViewController;
- (void)presentPaymentMethodsViewControllerWithNewState:(unsigned long long)arg1;
- (void)presentPaymentMethodsViewController;
- (void)removePaymentMethod:(id)arg1;
@property(copy, nonatomic) NSArray *paymentSummaryItems;
@property(nonatomic) long long paymentAmount;
- (id)currentValuePromise;
- (_Bool)transitionAnimationsEnabled;
@property(readonly, nonatomic) _Bool loading;
- (void)retryLoading;
- (id)initWithAPIAdapter:(id)arg1 configuration:(id)arg2 theme:(id)arg3;
- (id)initWithAPIAdapter:(id)arg1;
- (id)initWithCustomerContext:(id)arg1 configuration:(id)arg2 theme:(id)arg3;
- (id)initWithCustomerContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
