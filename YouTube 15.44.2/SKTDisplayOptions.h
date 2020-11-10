//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/SKTFullScreenViewControllerOptions.h>

#import <Module_Framework/SKTTopSuggestionsViewControllerOptions-Protocol.h>

@class GMDCContainerScheme, NSArray, NSNumber, NSString, QTMColorGroup, SKTClientConfig, SKTColorTheme, SKTExperimentOptions, SKTLocalizedStringOverrides, SKTUIAlertDialogOptions, SKTUIGridContactDisplayOptions, SKTUIInAppContactDisplayOptions, UIView, UIViewController;
@protocol SKTClientSharingDisplayOptions, SKTContactListColorOverrides, SKTDisplayOptionsDelegate, SKTShareSheetDelegate;

@interface SKTDisplayOptions : SKTFullScreenViewControllerOptions <SKTTopSuggestionsViewControllerOptions>
{
    _Bool _showHeaderOnMinimizedView;
    _Bool _hideSharingOptionsWhenContactsSelected;
    unsigned long long _initialSuggestionsLayout;
    unsigned long long _initialSuggestionCount;
    unsigned long long _initialSuggestionGridRows;
    SKTUIGridContactDisplayOptions *_gridContactDisplayOptions;
    id <SKTContactListColorOverrides> _topSuggestionsColorOverrides;
    SKTColorTheme *_topSuggestionsColors;
    double _minimizedFooterVerticalMargin;
    UIViewController<SKTClientSharingDisplayOptions> *_clientSharingOptionsViewController;
    CDUnknownBlockType _activityViewControllerBlock;
    unsigned long long _activityViewControllerDisplayStyle;
    unsigned long long _fullScreenCancelAction;
    unsigned long long _bottomSheetStyle;
    id <SKTDisplayOptionsDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SKTDisplayOptionsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long bottomSheetStyle; // @synthesize bottomSheetStyle=_bottomSheetStyle;
@property(nonatomic) _Bool hideSharingOptionsWhenContactsSelected; // @synthesize hideSharingOptionsWhenContactsSelected=_hideSharingOptionsWhenContactsSelected;
@property(nonatomic) unsigned long long fullScreenCancelAction; // @synthesize fullScreenCancelAction=_fullScreenCancelAction;
@property(nonatomic) unsigned long long activityViewControllerDisplayStyle; // @synthesize activityViewControllerDisplayStyle=_activityViewControllerDisplayStyle;
@property(copy, nonatomic) CDUnknownBlockType activityViewControllerBlock; // @synthesize activityViewControllerBlock=_activityViewControllerBlock;
@property(retain, nonatomic) UIViewController<SKTClientSharingDisplayOptions> *clientSharingOptionsViewController; // @synthesize clientSharingOptionsViewController=_clientSharingOptionsViewController;
@property(nonatomic) double minimizedFooterVerticalMargin; // @synthesize minimizedFooterVerticalMargin=_minimizedFooterVerticalMargin;
@property(nonatomic) _Bool showHeaderOnMinimizedView; // @synthesize showHeaderOnMinimizedView=_showHeaderOnMinimizedView;
@property(readonly, nonatomic) SKTColorTheme *topSuggestionsColors; // @synthesize topSuggestionsColors=_topSuggestionsColors;
@property(retain, nonatomic) id <SKTContactListColorOverrides> topSuggestionsColorOverrides; // @synthesize topSuggestionsColorOverrides=_topSuggestionsColorOverrides;
@property(retain, nonatomic) SKTUIGridContactDisplayOptions *gridContactDisplayOptions; // @synthesize gridContactDisplayOptions=_gridContactDisplayOptions;
@property(nonatomic) unsigned long long initialSuggestionGridRows; // @synthesize initialSuggestionGridRows=_initialSuggestionGridRows;
@property(nonatomic) unsigned long long initialSuggestionCount; // @synthesize initialSuggestionCount=_initialSuggestionCount;
@property(nonatomic) unsigned long long initialSuggestionsLayout; // @synthesize initialSuggestionsLayout=_initialSuggestionsLayout;
- (id)initWithThemeColorGroup:(id)arg1 inAppContactDisplayOptions:(id)arg2 clientID:(int)arg3;
- (id)initWithThemeColorGroup:(id)arg1 clientID:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) SKTClientConfig *clientConfig;
@property(readonly, nonatomic) int clientID;
@property(readonly, nonatomic) GMDCContainerScheme *containerScheme;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int entryPoint;
@property(retain, nonatomic) SKTExperimentOptions *experimentOptions;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SKTUIInAppContactDisplayOptions *inAppContactDisplayOptions;
@property(retain, nonatomic) NSArray *initiallySelectedTargets;
@property(nonatomic) __weak UIView *loggingParent;
@property(nonatomic) unsigned long long permissionsBehaviors;
@property(retain, nonatomic) SKTUIAlertDialogOptions *permissionsPreRequestOptions;
@property(nonatomic) unsigned long long selectionMode;
@property(retain, nonatomic) SKTUIAlertDialogOptions *settingsRedirectDialogOptions;
@property(nonatomic) __weak id <SKTShareSheetDelegate> shareSheetDelegate;
@property(retain, nonatomic) NSArray *sharedWithTargetGroups;
@property(nonatomic) _Bool showGroupResults;
@property(retain, nonatomic) SKTLocalizedStringOverrides *stringOverrides;
@property(retain, nonatomic) NSNumber *submissionID;
@property(readonly) Class superclass;
@property(retain, nonatomic) QTMColorGroup *themeColorGroup;
@property(nonatomic) _Bool validateContacts;

@end

