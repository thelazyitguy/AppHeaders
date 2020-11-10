//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRecoverAccountURIHandlerObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTRecoverAccountCoordinator;
@protocol SPTContainerService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTNetworkService, SPTRecoverAccountService, _TtP14ProfileFeature17SPTProfileService_;

@interface SPTRecoverAccountSessionServiceImplementation : NSObject <SPTRecoverAccountURIHandlerObserver, SPTService>
{
    id <SPTGLUEService> _glueService;
    id <SPTRecoverAccountService> _recoverAccountService;
    id <SPTNetworkService> _networkService;
    id <SPTContainerService> _containerService;
    id <SPTLoginLoggingService> _loggingService;
    id <SPTLoginService> _loginService;
    id <_TtP14ProfileFeature17SPTProfileService_> _profileService;
    SPTRecoverAccountCoordinator *_coordinator;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTRecoverAccountCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <_TtP14ProfileFeature17SPTProfileService_> profileService; // @synthesize profileService=_profileService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTRecoverAccountService> recoverAccountService; // @synthesize recoverAccountService=_recoverAccountService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void)URIHandler:(id)arg1 didFinishLoggingInWithURI:(id)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

