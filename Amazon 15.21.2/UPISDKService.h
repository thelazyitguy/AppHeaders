//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UPISDKService : NSObject
{
    NSString *_currentRequest;
    id _axis;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id axis; // @synthesize axis=_axis;
@property(retain, nonatomic) NSString *currentRequest; // @synthesize currentRequest=_currentRequest;
- (void).cxx_destruct;
- (void)createError:(id)arg1 code:(long long)arg2 reason:(id)arg3 error:(id *)arg4;
- (void)performTransaction:(id)arg1 requestPayload:(id)arg2 reqId:(id)arg3 upiCallbackhandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)isUPILibsLoaded;
- (void)initializeAxisClassIfNeeded:(id *)arg1;
- (void)loadDynamicLibs:(id *)arg1;
- (id)init;

@end
