//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, ServerRequest;

@interface LPLogin : NSObject
{
    int m_newiterations;
    _Bool m_interactive;
    id m_sender;
    NSString *_multifactor_postdata;
    NSString *_username;
    NSString *_userhash;
    NSString *_authSessionId;
    NSString *_alpFragmentId;
    NSString *_calculatedFragmentId;
    NSDictionary *_attributeDict;
    ServerRequest *_serverRequest;
    NSString *_multifactor_trustlabel;
}

+ (void)setCalculatedFragmentId:(id)arg1;
+ (id)calculatedFragmentId;
+ (void)setAlpFragmentId:(id)arg1;
+ (id)alpFragmentId;
+ (void)setAuthSessionId:(id)arg1;
+ (id)authSessionId;
+ (void)setTrust:(_Bool)arg1;
+ (_Bool)trust;
+ (void)setTrustlabel:(id)arg1;
+ (id)trustlabel;
+ (void)setGoogleauth:(id)arg1;
+ (id)googleauth;
+ (void)setUsername:(id)arg1;
+ (id)username;
+ (void)setLocalonly:(_Bool)arg1;
+ (_Bool)localonly;
+ (void)setLocal_xml:(id)arg1;
+ (id)local_xml;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *multifactor_trustlabel; // @synthesize multifactor_trustlabel=_multifactor_trustlabel;
@property(retain, nonatomic) ServerRequest *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(retain, nonatomic) NSDictionary *attributeDict; // @synthesize attributeDict=_attributeDict;
@property(retain, nonatomic) NSString *calculatedFragmentId; // @synthesize calculatedFragmentId=_calculatedFragmentId;
@property(retain, nonatomic) NSString *alpFragmentId; // @synthesize alpFragmentId=_alpFragmentId;
@property(retain, nonatomic) NSString *authSessionId; // @synthesize authSessionId=_authSessionId;
@property(retain, nonatomic) NSString *userhash; // @synthesize userhash=_userhash;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic, getter=multifactor_postdata, setter=set_multifactor_postdata:) NSString *multifactor_postdata; // @synthesize multifactor_postdata=_multifactor_postdata;
@property(nonatomic) __weak id sender; // @synthesize sender=m_sender;
- (void)doMainLogin;
- (void)fireLoginResponseOffline;
- (void)localLogin;
- (void)reloadLocalAccts;
- (int)startLoginProcess:(id)arg1 password:(id)arg2 localonly:(_Bool)arg3 googleauth:(id)arg4 trust:(_Bool)arg5 trustlabel:(id)arg6 authSessionId:(id)arg7 alpFragmentId:(id)arg8 calculatedFragmentId:(id)arg9;
- (int)startLoginProcess:(id)arg1 password:(id)arg2 localonly:(_Bool)arg3 googleauth:(id)arg4 trust:(_Bool)arg5;
- (int)startLoginProcess:(id)arg1 password:(id)arg2 localonly:(_Bool)arg3 authSessionId:(id)arg4 alpFragmentId:(id)arg5 calculatedFragmentId:(id)arg6;
- (int)startLoginProcess:(id)arg1 password:(id)arg2 localonly:(_Bool)arg3;
- (void)cleanup;
- (void)dealloc;
- (id)init;
- (void)login:(id)arg1;
- (void)login:(id)arg1 hash:(id)arg2 authSessionId:(id)arg3 alpFragmentId:(id)arg4 calculatedFragmentId:(id)arg5;
- (void)serverRequest:(id)arg1 error:(id)arg2 message:(id)arg3;
- (void)handleFrameworkError:(id)arg1 message:(id)arg2;
- (id)genericErrorMessage;
- (void)handleError:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleAlertMsg:(id)arg1;
- (_Bool)boolFromAttributeDict:(id)arg1 forKey:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

@end
