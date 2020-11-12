//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNViewController.h"

#import "DYNNetworkStateListener-Protocol.h"
#import "DYNUserListViewControllerDelegate-Protocol.h"
#import "DYNUserPickerChipContainerViewDelegate-Protocol.h"
#import "DYNUserPickerTokenContainerViewDelegate-Protocol.h"

@class DYNNetworkStateListenerHelper, DYNUserListViewController, DYNUserPickerChipContainerView, DYNUserPickerTokenContainerView, NSString;
@protocol DYNBotAutocompleteService, DYNExperimentsService, DYNSharedLayerService, GIPAccountID;

@interface DYNCreateBotDirectMessageViewController : DYNViewController <DYNUserListViewControllerDelegate, DYNUserPickerChipContainerViewDelegate, DYNUserPickerTokenContainerViewDelegate, DYNNetworkStateListener>
{
    id <GIPAccountID> _accountID;
    id <DYNBotAutocompleteService> _botAutocompleteService;
    struct CGPoint _effectOrigin;
    _Bool _hasSelectedBot;
    id <DYNExperimentsService> _experimentsService;
    _Bool _shouldListenToNetworkStateEvents;
    DYNNetworkStateListenerHelper *_networkStateListenerHelper;
    id <DYNSharedLayerService> _sharedLayerService;
    DYNUserPickerChipContainerView *_chipContainerView;
    DYNUserPickerTokenContainerView *_tokenContainerView;
    DYNUserListViewController *_suggestionViewController;
    double _keyboardHeight;
    NSString *_directMessageName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *directMessageName; // @synthesize directMessageName=_directMessageName;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) DYNUserListViewController *suggestionViewController; // @synthesize suggestionViewController=_suggestionViewController;
@property(retain, nonatomic) DYNUserPickerTokenContainerView *tokenContainerView; // @synthesize tokenContainerView=_tokenContainerView;
@property(retain, nonatomic) DYNUserPickerChipContainerView *chipContainerView; // @synthesize chipContainerView=_chipContainerView;
@property(retain, nonatomic) id <DYNSharedLayerService> sharedLayerService; // @synthesize sharedLayerService=_sharedLayerService;
@property(retain, nonatomic) DYNNetworkStateListenerHelper *networkStateListenerHelper; // @synthesize networkStateListenerHelper=_networkStateListenerHelper;
@property(nonatomic) _Bool shouldListenToNetworkStateEvents; // @synthesize shouldListenToNetworkStateEvents=_shouldListenToNetworkStateEvents;
- (id)containerView;
- (void)setUpSuggestionView;
- (void)setUpContainerView;
- (CDUnknownBlockType)botAutocompleteResultsCallback;
- (void)navigateToDirectMessageWithId:(id)arg1;
- (void)prepareForTransitionWithView:(id)arg1;
- (void)createBotDirectMessageWithBotName:(id)arg1 botId:(id)arg2;
- (void)unblockSuggestionsInterface;
- (void)blockSuggestionsInterfaceWithActiveMember:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)observeKeyboard;
- (void)didTapView:(id)arg1 forMember:(id)arg2;
- (void)tokenContainerView:(id)arg1 didChangeSearchText:(id)arg2;
- (void)tokenContainerView:(id)arg1 didRemoveMember:(id)arg2;
- (void)tokenContainerView:(id)arg1 didAddMember:(id)arg2;
- (void)chipContainerViewDidTapReturn:(id)arg1;
- (_Bool)chipFieldShouldReturn;
- (void)chipContainerView:(id)arg1 didChangeSearchText:(id)arg2;
- (void)chipContainerView:(id)arg1 didRemoveMember:(id)arg2;
- (void)chipContainerView:(id)arg1 didAddMember:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
