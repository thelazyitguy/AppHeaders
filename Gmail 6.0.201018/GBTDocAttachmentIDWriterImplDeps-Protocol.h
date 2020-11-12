//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOProvider;
@protocol GBTAccountSettingsService, GBTAccountsService, GBTEventLoggingService, GBTSyncHintsService, GIPGaiaAccountID;

@protocol GBTDocAttachmentIDWriterImplDeps <NSObject>
@property(readonly, nonatomic) GOOProvider *syncHintsServiceProvider;
@property(readonly, nonatomic) GOOProvider *eventLoggingServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider;
@property(readonly, nonatomic) GOOProvider *accountSettingsServiceProvider;
@property(readonly, nonatomic) id <GBTSyncHintsService> syncHintsService;
@property(readonly, nonatomic) id <GBTEventLoggingService> eventLoggingService;
@property(readonly, nonatomic) id <GBTAccountsService> accountsService;
@property(readonly, nonatomic) id <GBTAccountSettingsService> accountSettingsService;
@property(readonly, nonatomic) id <GIPGaiaAccountID> gaiaAccountID;
@end
