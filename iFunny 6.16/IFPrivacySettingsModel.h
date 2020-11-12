//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFModelProtocol-Protocol.h>

@class NSDictionary, NSString;
@protocol IFPrivacySettingsModelController, _TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_, _TtP8libFunny28IFContentViewsHistoryService_;

@interface IFPrivacySettingsModel : NSObject <IFModelProtocol>
{
    _Bool _isUpdatingPrivacyStatus;
    NSObject<IFPrivacySettingsModelController> *_controller;
    id <_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_> _accountManager;
    NSDictionary *_messagingPrivacyStatusInfo;
    id <_TtP8libFunny28IFContentViewsHistoryService_> _contentActionsService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP8libFunny28IFContentViewsHistoryService_> contentActionsService; // @synthesize contentActionsService=_contentActionsService;
@property(nonatomic) _Bool isUpdatingPrivacyStatus; // @synthesize isUpdatingPrivacyStatus=_isUpdatingPrivacyStatus;
@property(retain, nonatomic) NSDictionary *messagingPrivacyStatusInfo; // @synthesize messagingPrivacyStatusInfo=_messagingPrivacyStatusInfo;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny21NetworkAccountService_> accountManager; // @synthesize accountManager=_accountManager;
@property(nonatomic) __weak NSObject<IFPrivacySettingsModelController> *controller; // @synthesize controller=_controller;
- (void)updateLocationTracking:(_Bool)arg1;
- (_Bool)isLocationTrackingEnabled;
- (void)cleanViewsHistory;
- (_Bool)updateIncomingPermissions:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long whoCanWriteToMe;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
