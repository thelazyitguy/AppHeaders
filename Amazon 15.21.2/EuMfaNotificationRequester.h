//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSString;
@protocol AMILocalization;

@interface EuMfaNotificationRequester : NSObject <NSURLSessionDelegate>
{
    id <AMILocalization> _localizationService;
}

@property(retain, nonatomic) id <AMILocalization> localizationService; // @synthesize localizationService=_localizationService;
- (void).cxx_destruct;
- (id)makeSession;
- (id)parseJson:(id)arg1;
- (void)executeRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
