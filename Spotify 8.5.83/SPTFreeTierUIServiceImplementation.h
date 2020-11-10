//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTFreeTierUIComponentFactory, SPTGLUEService, SPTSessionService;

@interface SPTFreeTierUIServiceImplementation : NSObject <SPTFreeTierUIService>
{
    id <SPTGLUEService> _glueService;
    id <SPTSessionService> _sessionService;
    id <SPTFreeTierUIComponentFactory> _componentFactory;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTFreeTierUIComponentFactory> componentFactory; // @synthesize componentFactory=_componentFactory;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (id)provideComponentFactory;
- (id)providePersistentCounterWithIdentifier:(id)arg1 viewURI:(id)arg2;
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

