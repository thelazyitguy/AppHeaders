//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMLoggerDataProvider-Protocol.h"

@class NSString, SPTIncognitoModeHandler;
@protocol SPTNetworkConnectivityController, SPTProductState;

@interface SPTVideoLoggerDataProviderImpl : NSObject <BMLoggerDataProvider>
{
    NSString *_featureIdentifier;
    SPTIncognitoModeHandler *_incognitoModeHandler;
    id <SPTProductState> _productState;
    id <SPTNetworkConnectivityController> _ncc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> ncc; // @synthesize ncc=_ncc;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)streamingRules;
- (_Bool)isIncognitoMode;
- (id)connectionType;
- (id)initWithFeatureIdentifier:(id)arg1 incognitoModeHandler:(id)arg2 productState:(id)arg3 networkConnectivityController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
