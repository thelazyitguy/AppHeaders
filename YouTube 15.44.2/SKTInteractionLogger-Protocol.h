//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UIBarButtonItem, UIView;

@protocol SKTInteractionLogger <NSObject>

@optional
- (void)logShowDeviceContactsViewImpression:(UIView *)arg1;
- (void)logNoContactsViewImpression:(UIView *)arg1;
- (void)logNoResultsViewImpression:(UIView *)arg1;
- (void)logSendingViewAutomatedAction;
- (void)logSuggestionRowItemImpression:(UIView *)arg1;
- (void)logSelectionItemImpression:(UIView *)arg1;
- (void)logAboutSuggestedContactsMenuItemTap:(UIView *)arg1;
- (void)logShowPhoneContactsTap:(UIView *)arg1;
- (void)logShowMoreSuggestionsTap:(UIView *)arg1;
- (void)logContactChipHideNameTap:(UIView *)arg1;
- (void)logContactChipRemoveTap:(UIView *)arg1;
- (void)logContactChipDetailsImpression:(UIView *)arg1;
- (void)logContactChipTap:(UIView *)arg1;
- (void)logContactChipsBarTap:(UIView *)arg1;
- (void)logContactChipsBarBeginInput:(UIView *)arg1;
- (void)logSystemPermissionDenyTap;
- (void)logSystemPermissionAllowTap;
- (void)logSystemPermissionDialogImpression;
- (void)logSettingsRedirectCancelTap;
- (void)logSettingsRedirectProceedTap;
- (void)logSettingsRedirectDialogImpression;
- (void)logPrePermissionDenyTap;
- (void)logPrePermissionAllowTap;
- (void)logPrePermissionDialogImpression;
- (void)logInvalidPhoneDialogImpression:(UIView *)arg1;
- (void)logInvalidManualInputDialogImpression:(UIView *)arg1;
- (void)logInvalidEmailDialogImpression:(UIView *)arg1;
- (void)logSearchIconTap:(UIView *)arg1;
- (void)logHelpIconTap:(UIView *)arg1;
- (void)logInfoIconTap:(UIView *)arg1;
- (void)logStartButtonTap:(UIView *)arg1;
- (void)logSelectionItemAutomatedAction;
- (void)logExpandContactButtonTap:(UIView *)arg1;
- (void)logContactMethodTap:(UIView *)arg1 atIndex:(unsigned long long)arg2;
- (void)logAddRecipientItemTap:(UIView *)arg1;
- (void)logAtoZListContactTap:(UIView *)arg1;
- (void)logAutocompletionTap:(UIView *)arg1;
- (void)logSuggestionTap:(UIView *)arg1;
- (void)logAtoZListContactImpression:(UIView *)arg1 isSelected:(_Bool)arg2;
- (void)logAutocompletionImpression:(UIView *)arg1 atIndex:(unsigned long long)arg2;
- (void)logSuggestionImpression:(UIView *)arg1 isSelected:(_Bool)arg2 atIndex:(unsigned long long)arg3;
- (void)logProceedButtonAutomatedAction:(UIBarButtonItem *)arg1 onHeaderNavigationView:(UIView *)arg2;
- (void)logDismissButtonTap:(UIBarButtonItem *)arg1 onHeaderNavigationView:(UIView *)arg2;
- (void)logProceedButtonTap:(UIBarButtonItem *)arg1 onHeaderNavigationView:(UIView *)arg2;
- (void)logPeopleKitViewImpression:(UIView *)arg1;
- (void)logFullScreenImpression:(UIView *)arg1;
- (void)logShareSheetTap:(UIView *)arg1;
- (void)logShareSheetImpression:(UIView *)arg1;
@end

