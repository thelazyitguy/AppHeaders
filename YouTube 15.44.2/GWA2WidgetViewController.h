//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2LockingSheetViewController.h>

#import <Module_Framework/GWA2FlowController-Protocol.h>
#import <Module_Framework/GWAAppRedirectProtocol-Protocol.h>

@class GWA2Logger, GWA2Page, GWA2WidgetPageViewController, GWAService, NSData, NSMutableArray, NSString, ORCH2InitializeRequest, ORCH2IntegratorClientCallbackData, ORCH2ResponseContext, ORCH2SecureDataHeader, ORCH2SubmitRequest;
@protocol GWA2WidgetViewControllerDelegate, SSOAuthorization, SSOIdentity, SSOService;

@interface GWA2WidgetViewController : GWA2LockingSheetViewController <GWA2FlowController, GWAAppRedirectProtocol>
{
    unsigned long long _widgetType;
    unsigned long long _presentationStyle;
    GWA2WidgetPageViewController *_pageViewController;
    GWA2Logger *_logger;
    long long _environment;
    id <SSOIdentity> _identity;
    id <SSOService> _ssoService;
    id <SSOAuthorization> _ssoAuth;
    GWAService *_paymentService;
    GWA2Page *_page;
    ORCH2InitializeRequest *_activeInitializeRequest;
    ORCH2SubmitRequest *_activeSubmitRequest;
    CDUnknownBlockType _submitCompletion;
    long long _requestID;
    ORCH2ResponseContext *_responseContext;
    ORCH2SecureDataHeader *_secureHeader;
    NSData *_encryptedSessionData;
    NSMutableArray *_loggingConfigurationsFromResponseContext;
    NSData *_encryptedParameters;
    NSData *_clientParameters;
    NSData *_o2ActionToken;
    _Bool _viewAppearedForTheFirstTime;
    ORCH2IntegratorClientCallbackData *_integratorClientCallbackDataForErrors;
    _Bool _paymentsLoggingEnabled;
    _Bool _reauthenticationEnabled;
    _Bool _useReauthProductionServer;
    id <GWA2WidgetViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useReauthProductionServer; // @synthesize useReauthProductionServer=_useReauthProductionServer;
@property(nonatomic, getter=isReauthenticationEnabled) _Bool reauthenticationEnabled; // @synthesize reauthenticationEnabled=_reauthenticationEnabled;
@property(nonatomic, getter=isPaymentsLoggingEnabled) _Bool paymentsLoggingEnabled; // @synthesize paymentsLoggingEnabled=_paymentsLoggingEnabled;
@property(nonatomic) __weak id <GWA2WidgetViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)loggingConfigurationsFromResponseContext;
- (id)page;
- (void)setLogger:(id)arg1;
- (id)logger;
- (void)showErrorDialogWithErrorMessage:(id)arg1 allowRetry:(_Bool)arg2;
- (id)submitSecureHeaders;
- (id)blankViewController;
- (void)lockingSheetControllerDidCancel:(id)arg1;
- (void)closeWidgetWithResult:(id)arg1 userCancelled:(_Bool)arg2;
- (void)closeButtonTapped;
- (id)requestContext;
- (_Bool)handleIncomingURL:(id)arg1;
- (int)endingEventForLogEvent:(int)arg1;
- (_Bool)isLoggingEnabledForEventType:(int)arg1;
- (void)logEvent:(int)arg1 clientLogToken:(id)arg2 lookupResponseContext:(_Bool)arg3;
- (void)logEvent:(int)arg1 lookupResponseContext:(_Bool)arg2;
- (void)logEvent:(int)arg1 apiEndPoint:(int)arg2 userCancelled:(_Bool)arg3 result:(id)arg4 clientLogToken:(id)arg5 lookupResponseContext:(_Bool)arg6;
- (void)onDialogCloseWidget;
- (void)onDialogCancel;
- (void)onDialogRetry;
- (CDUnknownBlockType)completionForAPIEndpoint:(int)arg1;
- (void)submit;
- (void)handleUIResponse:(id)arg1 fromAPIEndpoint:(int)arg2 responsePrefetched:(_Bool)arg3 error:(id)arg4;
- (id)baseServicePath;
- (id)service;
- (void)uploadDocumentWithURL:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)dataFromIntegratorClientCallbackData:(id)arg1;
- (id)dataFromIntegratorServerCallbackData:(id)arg1;
- (void)fallbackToO1WidgetWithAction:(id)arg1;
- (void)finishWithAction:(id)arg1;
- (id)keyHandleForKeyName:(id)arg1;
- (void)registerKeyName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requestAddressSuggestionsWithInput:(id)arg1 suggestionFieldID:(unsigned long long)arg2 countryCode:(id)arg3 languageCode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)sendReauthRequestData:(id)arg1 endpoint:(id)arg2 responseClass:(Class)arg3 handler:(CDUnknownBlockType)arg4;
- (void)submitWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)requestID;
- (id)authScopes;
- (void)loadFlowWithO2ActionToken:(id)arg1;
- (void)loadFlowWithEncryptedParamaters:(id)arg1 clientParameters:(id)arg2;
- (void)fetchAndInitializeFlowIfNeeded;
- (void)initializePageControllerAndSetInitialViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithWidgetType:(unsigned long long)arg1 environment:(long long)arg2 identity:(id)arg3 service:(id)arg4 o2ActionToken:(id)arg5 interfaceStyle:(unsigned long long)arg6;
- (id)initWithWidgetType:(unsigned long long)arg1 environment:(long long)arg2 identity:(id)arg3 service:(id)arg4 encryptedParameters:(id)arg5 clientParameters:(id)arg6 interfaceStyle:(unsigned long long)arg7 presentationStyle:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

