//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PDLPeopleDataServiceDependencies-Protocol.h>

@class GOOProvider, NSString;
@protocol CCTClearcutLoggerProvider, GIPAccountID, GSCAccountsService, PDLConfigurationService, PDLDeviceContactsService, PDLExperimentsService, PDLMetricsLoggerFactory;

@interface PDLPeopleDataServiceDependenciesImpl : NSObject <PDLPeopleDataServiceDependencies>
{
    id <GIPAccountID> _accountID;
    GOOProvider *_accountsServiceProvider;
    GOOProvider *_clearcutLoggerProviderProvider;
    GOOProvider *_configurationServiceProvider;
    GOOProvider *_deviceContactsServiceProvider;
    GOOProvider *_experimentsServiceProvider;
    GOOProvider *_metricsLoggerFactoryProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GOOProvider *metricsLoggerFactoryProvider; // @synthesize metricsLoggerFactoryProvider=_metricsLoggerFactoryProvider;
@property(readonly, nonatomic) GOOProvider *experimentsServiceProvider; // @synthesize experimentsServiceProvider=_experimentsServiceProvider;
@property(readonly, nonatomic) GOOProvider *deviceContactsServiceProvider; // @synthesize deviceContactsServiceProvider=_deviceContactsServiceProvider;
@property(readonly, nonatomic) GOOProvider *configurationServiceProvider; // @synthesize configurationServiceProvider=_configurationServiceProvider;
@property(readonly, nonatomic) GOOProvider *clearcutLoggerProviderProvider; // @synthesize clearcutLoggerProviderProvider=_clearcutLoggerProviderProvider;
@property(readonly, nonatomic) GOOProvider *accountsServiceProvider; // @synthesize accountsServiceProvider=_accountsServiceProvider;
@property(readonly, nonatomic) id <GIPAccountID> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory;
@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService;
@property(readonly, nonatomic) id <PDLDeviceContactsService> deviceContactsService;
@property(readonly, nonatomic) id <PDLConfigurationService> configurationService;
@property(readonly, nonatomic) id <CCTClearcutLoggerProvider> clearcutLoggerProvider;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService;
- (id)initWithAccountID:(id)arg1 accountsServiceProvider:(id)arg2 clearcutLoggerProviderProvider:(id)arg3 configurationServiceProvider:(id)arg4 deviceContactsServiceProvider:(id)arg5 experimentsServiceProvider:(id)arg6 metricsLoggerFactoryProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

