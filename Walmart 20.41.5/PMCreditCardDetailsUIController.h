//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WalmartCore/PMCreditCardDetailsCardInformationSectionDelegate-Protocol.h>
#import <WalmartCore/PMCreditCardDetailsDataConsumer-Protocol.h>
#import <WalmartCore/SDTableViewSectionControllerDelegate-Protocol.h>
#import <WalmartCore/UITextFieldDelegate-Protocol.h>
#import <WalmartCore/_TtP11FeatureAPIs20WMCreditCardDelegate_-Protocol.h>

@class NSString, PMCreditCardDetailsDatasource, SDTableViewSectionController, UITableView;
@protocol PMCreditCardDetailsUIControllerDelegate;

@interface PMCreditCardDetailsUIController : UIViewController <PMCreditCardDetailsDataConsumer, SDTableViewSectionControllerDelegate, UITextFieldDelegate, PMCreditCardDetailsCardInformationSectionDelegate, _TtP11FeatureAPIs20WMCreditCardDelegate_>
{
    _Bool _hasUpdatedViewConstraints;
    _Bool _isWMPayUser;
    _Bool _shouldShowValidationLabels;
    _Bool _isLinkingWalmartCard;
    _Bool _walmartCardConnectedBeforeAccountLink;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _cancelBlock;
    id <PMCreditCardDetailsUIControllerDelegate> _delegate;
    PMCreditCardDetailsDatasource *_cardDetailsDatasource;
    UITableView *_tableView;
    SDTableViewSectionController *_sectionController;
    NSString *_cardTypeEnding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool walmartCardConnectedBeforeAccountLink; // @synthesize walmartCardConnectedBeforeAccountLink=_walmartCardConnectedBeforeAccountLink;
@property(nonatomic) _Bool isLinkingWalmartCard; // @synthesize isLinkingWalmartCard=_isLinkingWalmartCard;
@property(nonatomic) _Bool shouldShowValidationLabels; // @synthesize shouldShowValidationLabels=_shouldShowValidationLabels;
@property(retain, nonatomic) NSString *cardTypeEnding; // @synthesize cardTypeEnding=_cardTypeEnding;
@property(retain, nonatomic) SDTableViewSectionController *sectionController; // @synthesize sectionController=_sectionController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isWMPayUser; // @synthesize isWMPayUser=_isWMPayUser;
@property(retain, nonatomic) PMCreditCardDetailsDatasource *cardDetailsDatasource; // @synthesize cardDetailsDatasource=_cardDetailsDatasource;
@property(nonatomic) __weak id <PMCreditCardDetailsUIControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)connectNowUserCanceled;
- (void)connectNowFailedToLinkAccountWithError:(id)arg1;
- (void)connectNowUserAccountLinkedWithLinkedCards:(id)arg1;
- (void)connectNowUserStartedConnection;
- (void)p_navigateToWalmartCardSummary;
- (void)p_subscribeForWalmartCreditCardEvents;
- (_Bool)shouldValidateTextField:(id)arg1;
- (void)cardType:(id)arg1;
- (void)creditCardDetailsCardInformationSectionDidTapSecurityCodeInfo:(id)arg1;
- (void)pmCreditCardTypeChanged;
- (void)pmDataValidationChanged:(_Bool)arg1;
- (void)pmDataWasUpdated:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldAccessoryViewDismissKeyboard;
- (id)textFieldThatIsFirstResponder;
- (void)p_removeCardActionUserHasCancelled;
- (void)p_removeCardActionUserHasConfirmed;
- (void)p_showRemoveCardAlertTitle:(id)arg1 message:(id)arg2;
- (void)p_removeCardAction;
- (void)p_saveCardAction:(id)arg1;
- (void)p_cancelCardAction:(id)arg1;
- (void)actionWasCompleted:(_Bool)arg1;
- (void)actionWillComplete;
- (void)p_reloadTable;
- (id)p_controllersForTableView:(id)arg1;
- (void)p_reloadDataSource;
- (void)updateViewConstraints;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)p_notifyDidShowKeyboard;
- (void)p_keyboardWillBeHidden:(id)arg1;
- (void)p_keyboardWasShown:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (id)initWithCardInformationFromScan:(id)arg1 referenceCards:(id)arg2;
- (id)initWithCardInformation:(id)arg1 referenceCards:(id)arg2;
- (id)initBlankCardWithReferenceCards:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
