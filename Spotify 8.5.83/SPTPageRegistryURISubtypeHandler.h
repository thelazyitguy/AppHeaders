//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTNavigationRouter;

@interface SPTPageRegistryURISubtypeHandler : NSObject <SPTURISubtypeHandler>
{
    id <SPTNavigationRouter> _navigationRouter;
    SPTObserverManager *_ubiObserverManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *ubiObserverManager; // @synthesize ubiObserverManager=_ubiObserverManager;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
- (void)ubiNavigationLocationChangingWithContext:(id)arg1;
- (void)ubiNavigationRequestedWithContext:(id)arg1;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithNavigationRouter:(id)arg1 ubiObserverManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

