//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AppWelcomeView-Protocol.h"
#import "CountryPickerViewControllerDelegate-Protocol.h"

@class AppWelcomePresenter, CountryPickerViewController, NSString, TwoLabelsButton, UIButton, UILabel, UIView;
@protocol AppWelcomeViewControllerDelegate;

@interface AppWelcomeViewController : BaseViewController <AppWelcomeView, CountryPickerViewControllerDelegate>
{
    _Bool _displayContentForNewUser;
    id <AppWelcomeViewControllerDelegate> _delegate;
    AppWelcomePresenter *_presenter;
    UILabel *_upperWelcomeLabel;
    UILabel *_lowerWelcomeLabel;
    UIView *_existingUserLabelContainer;
    UILabel *_existingUserLabel;
    CountryPickerViewController *_countryPickerVC;
    TwoLabelsButton *_countryButton;
    UIButton *_continueButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(nonatomic) __weak TwoLabelsButton *countryButton; // @synthesize countryButton=_countryButton;
@property(retain, nonatomic) CountryPickerViewController *countryPickerVC; // @synthesize countryPickerVC=_countryPickerVC;
@property(nonatomic) __weak UILabel *existingUserLabel; // @synthesize existingUserLabel=_existingUserLabel;
@property(nonatomic) __weak UIView *existingUserLabelContainer; // @synthesize existingUserLabelContainer=_existingUserLabelContainer;
@property(nonatomic) __weak UILabel *lowerWelcomeLabel; // @synthesize lowerWelcomeLabel=_lowerWelcomeLabel;
@property(nonatomic) __weak UILabel *upperWelcomeLabel; // @synthesize upperWelcomeLabel=_upperWelcomeLabel;
@property(retain, nonatomic) AppWelcomePresenter *presenter; // @synthesize presenter=_presenter;
@property(nonatomic) _Bool displayContentForNewUser; // @synthesize displayContentForNewUser=_displayContentForNewUser;
@property(nonatomic) __weak id <AppWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)configureAccessibilityForCountryDisplayName:(id)arg1;
- (void)configureAccessibility;
- (void)countryPickerViewController:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)enableContinueButton:(_Bool)arg1;
- (void)updateTermsAcceptanceMode:(unsigned long long)arg1;
- (void)handleCountryDisplayNameUpdated:(id)arg1;
- (void)handleContinue;
- (void)handleNewCountrySelection;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppearTheFirstTimeOnly;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
