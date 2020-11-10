//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/IosMslTrustStoreAccess-Protocol.h>

@class APIConfiguration, NSDictionary, NSString;
@protocol AppleNativeStorage, AppleURLSession, IDevice, IosMslClientConfigurationProvider, NetflixIdTokenAuthenticationData, NetflixUrlProvider, OS_dispatch_queue;

@interface MdxCTicketFetch : NSObject <IosMslTrustStoreAccess>
{
    id <IDevice> _device;
    id <AppleNativeStorage> _storage;
    id <AppleURLSession> _urlSession;
    id <NetflixUrlProvider> _netflixUrlProvider;
    id <IosMslClientConfigurationProvider> _configProvider;
    NSString *_userId;
    NSObject<NetflixIdTokenAuthenticationData> *_authData;
    APIConfiguration *_configuration;
    NSDictionary *_mslTrustStore;
    NSObject<OS_dispatch_queue> *_queue;
    shared_ptr_a22ac082 _mslStore;
    shared_ptr_e1cef908 _mslControl;
    shared_ptr_e7ab91d9 _keyProvider;
    shared_ptr_eb762fca _clientMslContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSDictionary *mslTrustStore; // @synthesize mslTrustStore=_mslTrustStore;
@property shared_ptr_eb762fca clientMslContext; // @synthesize clientMslContext=_clientMslContext;
@property shared_ptr_e7ab91d9 keyProvider; // @synthesize keyProvider=_keyProvider;
@property shared_ptr_e1cef908 mslControl; // @synthesize mslControl=_mslControl;
@property shared_ptr_a22ac082 mslStore; // @synthesize mslStore=_mslStore;
@property(retain) APIConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSObject<NetflixIdTokenAuthenticationData> *authData; // @synthesize authData=_authData;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) id <IosMslClientConfigurationProvider> configProvider; // @synthesize configProvider=_configProvider;
@property(retain) id <NetflixUrlProvider> netflixUrlProvider; // @synthesize netflixUrlProvider=_netflixUrlProvider;
@property(retain) id <AppleURLSession> urlSession; // @synthesize urlSession=_urlSession;
@property(retain) id <AppleNativeStorage> storage; // @synthesize storage=_storage;
@property(retain) id <IDevice> device; // @synthesize device=_device;
- (id)mdxMslCTicketPairingCrypto:(id *)arg1;
- (void)fetchCTicket:(CDUnknownBlockType)arg1;
- (id)_tryMslOp:(id)arg1 payload:(id)arg2 userAuthData:(shared_ptr_5912bd39)arg3;
- (id)_performMslOp:(id)arg1 payload:(id)arg2 userAuthData:(shared_ptr_5912bd39)arg3;
- (void)_performAppboot;
- (void)_performPing;
- (void)_fetchCTicket:(CDUnknownBlockType)arg1;
- (id)getKeyFromTrustStore:(id)arg1;
- (void)_initMslControl;
- (id)initWithDevice:(id)arg1 storage:(id)arg2 urlSession:(id)arg3 netflixUrlProvider:(id)arg4 configurationProvider:(id)arg5 userId:(id)arg6 cookies:(id)arg7 apiConfiguration:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
