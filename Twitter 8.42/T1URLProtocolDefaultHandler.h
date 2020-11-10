//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/T1URLProtocolHandler-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol T1URLProtocolDefaultHandlerConfiguration;

@interface T1URLProtocolDefaultHandler : NSObject <T1URLProtocolHandler>
{
    NSSet *_schemes;
    NSDictionary *_flowClassMap;
    id <T1URLProtocolDefaultHandlerConfiguration> _configuration;
}

+ (id)connectToPeriscopeSettingURL;
+ (id)peopleAddressBookURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <T1URLProtocolDefaultHandlerConfiguration> configuration; // @synthesize configuration=_configuration;
- (void)_t1_showDisabledProfileForTeamsAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_t1_showDisabledSettingsForTeamsAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_t1_shouldDenyAccessForTeamsAccount:(id)arg1;
- (_Bool)_t1_handleIntentRoute:(id)arg1 appNavigation:(id)arg2 source:(long long)arg3 arguments:(id)arg4 account:(id)arg5 referrer:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)_t1_appNavigation:(id)arg1 handleGenericFlow:(id)arg2 account:(id)arg3 source:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_t1_loginWithTokenForPasswordReset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_t1_protocolRouter:(id)arg1 handleURL:(id)arg2 context:(id)arg3 routeCompletion:(CDUnknownBlockType)arg4;
- (unsigned long long)protocolRouter:(id)arg1 handleURL:(id)arg2 context:(id)arg3 routeCompletion:(CDUnknownBlockType)arg4;
- (unsigned long long)protocolRouter:(id)arg1 handleURL:(id)arg2 context:(id)arg3;
- (_Bool)protocolRouter:(id)arg1 supportsScheme:(id)arg2;
- (id)flowClasses;
- (id)schemes;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
